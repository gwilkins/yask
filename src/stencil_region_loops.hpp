/*
 * 4-D loop code.
 * Generated automatically from the following pseudo-code:
 *
 * serpentine omp
 * loop (rv, rz, ry, rx)
 * {
 *   calc (block);
 * }
 *
 */

 // Number of iterations to get from begin_rv to (but not including) end_rv,
 // stepping by step_rv.
const int num_rv = ((end_rv - begin_rv) + (step_rv - 1)) / step_rv;

 // Number of iterations to get from begin_rz to (but not including) end_rz,
 // stepping by step_rz.
const int num_rz = ((end_rz - begin_rz) + (step_rz - 1)) / step_rz;

 // Number of iterations to get from begin_ry to (but not including) end_ry,
 // stepping by step_ry.
const int num_ry = ((end_ry - begin_ry) + (step_ry - 1)) / step_ry;

 // Number of iterations to get from begin_rx to (but not including) end_rx,
 // stepping by step_rx.
const int num_rx = ((end_rx - begin_rx) + (step_rx - 1)) / step_rx;

 // Number of iterations in loop collapsed across rv, rz, ry, rx dimensions.
const long int num_rv_rz_ry_rx =
  (long int) num_rv * (long int) num_rz * (long int) num_ry *
  (long int) num_rx;

 // Loop index var.
long int loop_index_rv_rz_ry_rx = 0;

 // Computation loop.

 // Distribute iterations among OpenMP threads.
_Pragma ("omp for schedule(dynamic)")
  for (; loop_index_rv_rz_ry_rx < num_rv_rz_ry_rx; loop_index_rv_rz_ry_rx++)
  {

    // Zero-based, unit-stride index var for rv.
    int index_rv = loop_index_rv_rz_ry_rx / (num_rz * num_ry * num_rx);

    // Zero-based, unit-stride index var for rz.
    int index_rz = (loop_index_rv_rz_ry_rx / (num_ry * num_rx)) % num_rz;

    // Reverse direction of index_rz after every iteration of index_rv for
    // 'serpentine' path.
    if ((index_rv & 1) == 1)
      index_rz = num_rz - index_rz - 1;

    // Zero-based, unit-stride index var for ry.
    int index_ry = (loop_index_rv_rz_ry_rx / (num_rx)) % num_ry;

    // Reverse direction of index_ry after every iteration of index_rz for
    // 'serpentine' path.
    if ((index_rz & 1) == 1)
      index_ry = num_ry - index_ry - 1;

    // Zero-based, unit-stride index var for rx.
    int index_rx = (loop_index_rv_rz_ry_rx) % num_rx;

    // Reverse direction of index_rx after every iteration of index_ry for
    // 'serpentine' path.
    if ((index_ry & 1) == 1)
      index_rx = num_rx - index_rx - 1;

    // This value of index_rv covers rv from start_rv to stop_rv-1.
    const int start_rv = begin_rv + (index_rv * step_rv);
    const int stop_rv = min (start_rv + step_rv, end_rv);

    // This value of index_rz covers rz from start_rz to stop_rz-1.
    const int start_rz = begin_rz + (index_rz * step_rz);
    const int stop_rz = min (start_rz + step_rz, end_rz);

    // This value of index_ry covers ry from start_ry to stop_ry-1.
    const int start_ry = begin_ry + (index_ry * step_ry);
    const int stop_ry = min (start_ry + step_ry, end_ry);

    // This value of index_rx covers rx from start_rx to stop_rx-1.
    const int start_rx = begin_rx + (index_rx * step_rx);
    const int stop_rx = min (start_rx + step_rx, end_rx);

    // Computation.
    calc_block (context, t0, start_rv, start_rx, start_ry, start_rz, stop_rv,
		stop_rx, stop_ry, stop_rz);
  }

// End of generated code.
