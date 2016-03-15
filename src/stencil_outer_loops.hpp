/*
 * 4-D loop code.
 * Generated automatically from the following pseudo-code:
 *
 * loop (dv, dz, dy, dx)
 * {
 *   calc (region);
 * }
 *
 */

 // Number of iterations to get from begin_dv to (but not including) end_dv,
 // stepping by step_dv.
const int num_dv = ((end_dv - begin_dv) + (step_dv - 1)) / step_dv;

 // Number of iterations to get from begin_dz to (but not including) end_dz,
 // stepping by step_dz.
const int num_dz = ((end_dz - begin_dz) + (step_dz - 1)) / step_dz;

 // Number of iterations to get from begin_dy to (but not including) end_dy,
 // stepping by step_dy.
const int num_dy = ((end_dy - begin_dy) + (step_dy - 1)) / step_dy;

 // Number of iterations to get from begin_dx to (but not including) end_dx,
 // stepping by step_dx.
const int num_dx = ((end_dx - begin_dx) + (step_dx - 1)) / step_dx;

 // Number of iterations in loop collapsed across dv, dz, dy, dx dimensions.
const long int num_dv_dz_dy_dx =
  (long int) num_dv * (long int) num_dz * (long int) num_dy *
  (long int) num_dx;

 // Loop index var.
long int loop_index_dv_dz_dy_dx = 0;

 // Computation loop.
for (; loop_index_dv_dz_dy_dx < num_dv_dz_dy_dx; loop_index_dv_dz_dy_dx++)
  {

    // Zero-based, unit-stride index var for dv.
    int index_dv = loop_index_dv_dz_dy_dx / (num_dz * num_dy * num_dx);

    // Zero-based, unit-stride index var for dz.
    int index_dz = (loop_index_dv_dz_dy_dx / (num_dy * num_dx)) % num_dz;

    // Zero-based, unit-stride index var for dy.
    int index_dy = (loop_index_dv_dz_dy_dx / (num_dx)) % num_dy;

    // Zero-based, unit-stride index var for dx.
    int index_dx = (loop_index_dv_dz_dy_dx) % num_dx;

    // This value of index_dv covers dv from start_dv to stop_dv-1.
    const int start_dv = begin_dv + (index_dv * step_dv);
    const int stop_dv = min (start_dv + step_dv, end_dv);

    // This value of index_dz covers dz from start_dz to stop_dz-1.
    const int start_dz = begin_dz + (index_dz * step_dz);
    const int stop_dz = min (start_dz + step_dz, end_dz);

    // This value of index_dy covers dy from start_dy to stop_dy-1.
    const int start_dy = begin_dy + (index_dy * step_dy);
    const int stop_dy = min (start_dy + step_dy, end_dy);

    // This value of index_dx covers dx from start_dx to stop_dx-1.
    const int start_dx = begin_dx + (index_dx * step_dx);
    const int stop_dx = min (start_dx + step_dx, end_dx);

    // Computation.
    calc_region (context, t0, start_dv, start_dx, start_dy, start_dz, stop_dv,
		 stop_dx, stop_dy, stop_dz);
  }

// End of generated code.
