// Automatically generated code; do not edit.

// Calculate 16 results for order 16, 51-point iso3dfd stencil at time t0 + TIME_STEPS, work variable v0, and vector location veci, vecj, veck.
// Use 1x4x4 vector-folds in a 1x1x1 vector-fold cluster.
// SIMD calculations use 51 vector blocks created from 27 aligned vector-blocks.
ALWAYS_INLINE void
calc_stencil_vector (StencilContext & context, int t0, int v0, long veci,
		     long vecj, long veck)
{

  // Evaluate the expression '(((2 * grid(0, 0, 0, 0, 0)) - grid(-1, 0, 0, 0, 0)) + (((grid(0, 0, 0, 0, 0) * -0.00366581) + ((grid(0, 0, -1, 0, 0) + grid(0, 0, 1, 0, 0) + grid(0, 0, 0, -1, 0) + grid(0, 0, 0, 1, 0) + grid(0, 0, 0, 0, -1) + grid(0, 0, 0, 0, 1)) * -0.00366581) + ((grid(0, 0, -2, 0, 0) + grid(0, 0, 2, 0, 0) + grid(0, 0, 0, -2, 0) + grid(0, 0, 0, 2, 0) + grid(0, 0, 0, 0, -2) + grid(0, 0, 0, 0, 2)) * -0.00366581) + ((grid(0, 0, -3, 0, 0) + grid(0, 0, 3, 0, 0) + grid(0, 0, 0, -3, 0) + grid(0, 0, 0, 3, 0) + grid(0, 0, 0, 0, -3) + grid(0, 0, 0, 0, 3)) * -0.00366581) + ((grid(0, 0, -4, 0, 0) + grid(0, 0, 4, 0, 0) + grid(0, 0, 0, -4, 0) + grid(0, 0, 0, 4, 0) + grid(0, 0, 0, 0, -4) + grid(0, 0, 0, 0, 4)) * -0.00366581) + ((grid(0, 0, -5, 0, 0) + grid(0, 0, 5, 0, 0) + grid(0, 0, 0, -5, 0) + grid(0, 0, 0, 5, 0) + grid(0, 0, 0, 0, -5) + grid(0, 0, 0, 0, 5)) * -0.00366581) + ((grid(0, 0, -6, 0, 0) + grid(0, 0, 6, 0, 0) + grid(0, 0, 0, -6, 0) + grid(0, 0, 0, 6, 0) + grid(0, 0, 0, 0, -6) + grid(0, 0, 0, 0, 6)) * -0.00366581) + ((grid(0, 0, -7, 0, 0) + grid(0, 0, 7, 0, 0) + grid(0, 0, 0, -7, 0) + grid(0, 0, 0, 7, 0) + grid(0, 0, 0, 0, -7) + grid(0, 0, 0, 0, 7)) * -0.00366581) + ((grid(0, 0, -8, 0, 0) + grid(0, 0, 8, 0, 0) + grid(0, 0, 0, -8, 0) + grid(0, 0, 0, 8, 0) + grid(0, 0, 0, 0, -8) + grid(0, 0, 0, 0, 8)) * -0.00366581)) * vel(0, 0, 0)))'...

  // Calculate vector number 1 at offset 0, 0, 0.
  // Create a const vector with all values set to 2.
  static const realv vec1 = {.r =
      {2.00000000000000000e+00, 2.00000000000000000e+00,
       2.00000000000000000e+00, 2.00000000000000000e+00,
       2.00000000000000000e+00, 2.00000000000000000e+00,
       2.00000000000000000e+00, 2.00000000000000000e+00,
       2.00000000000000000e+00, 2.00000000000000000e+00,
       2.00000000000000000e+00, 2.00000000000000000e+00,
       2.00000000000000000e+00, 2.00000000000000000e+00,
       2.00000000000000000e+00, 2.00000000000000000e+00} };

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 0.
  realv vec2 =
    context.grid->readVec (t0 + 0, v0, veci + 0, vecj + 0, veck + 0,
			   __LINE__);

  // Aligned vector block from grid at t=t0+-1 at point 0, 0, 0.
  realv vec3 =
    context.grid->readVec (t0 + -1, v0, veci + 0, vecj + 0, veck + 0,
			   __LINE__);
  // Create a const vector with all values set to -3.66581352000000006e-03.
  static const realv vec4 = {.r =
      {-3.66581352000000006e-03, -3.66581352000000006e-03,
       -3.66581352000000006e-03, -3.66581352000000006e-03,
       -3.66581352000000006e-03, -3.66581352000000006e-03,
       -3.66581352000000006e-03, -3.66581352000000006e-03,
       -3.66581352000000006e-03, -3.66581352000000006e-03,
       -3.66581352000000006e-03, -3.66581352000000006e-03,
       -3.66581352000000006e-03, -3.66581352000000006e-03,
       -3.66581352000000006e-03, -3.66581352000000006e-03} };

  // Aligned vector block from grid at t=t0+0 at point -1, 0, 0.
  realv vec5 =
    context.grid->readVec (t0 + 0, v0, veci + -1, vecj + 0, veck + 0,
			   __LINE__);

  // Aligned vector block from grid at t=t0+0 at point 1, 0, 0.
  realv vec6 =
    context.grid->readVec (t0 + 0, v0, veci + 1, vecj + 0, veck + 0,
			   __LINE__);

  // Aligned vector block from grid at t=t0+0 at point 0, -4, 0.
  realv vec7 =
    context.grid->readVec (t0 + 0, v0, veci + 0, vecj + -1, veck + 0,
			   __LINE__);

  // Unaligned vector block from grid at t=t0+0 at point 0, -1, 0.
  realv vec8;
  vec8[0] = vec7[3];
  vec8[1] = vec2[0];
  vec8[2] = vec2[1];
  vec8[3] = vec2[2];
  vec8[4] = vec7[7];
  vec8[5] = vec2[4];
  vec8[6] = vec2[5];
  vec8[7] = vec2[6];
  vec8[8] = vec7[11];
  vec8[9] = vec2[8];
  vec8[10] = vec2[9];
  vec8[11] = vec2[10];
  vec8[12] = vec7[15];
  vec8[13] = vec2[12];
  vec8[14] = vec2[13];
  vec8[15] = vec2[14];

  // Aligned vector block from grid at t=t0+0 at point 0, 4, 0.
  realv vec9 =
    context.grid->readVec (t0 + 0, v0, veci + 0, vecj + 1, veck + 0,
			   __LINE__);

  // Unaligned vector block from grid at t=t0+0 at point 0, 1, 0.
  realv vec10;
  vec10[0] = vec2[1];
  vec10[1] = vec2[2];
  vec10[2] = vec2[3];
  vec10[3] = vec9[0];
  vec10[4] = vec2[5];
  vec10[5] = vec2[6];
  vec10[6] = vec2[7];
  vec10[7] = vec9[4];
  vec10[8] = vec2[9];
  vec10[9] = vec2[10];
  vec10[10] = vec2[11];
  vec10[11] = vec9[8];
  vec10[12] = vec2[13];
  vec10[13] = vec2[14];
  vec10[14] = vec2[15];
  vec10[15] = vec9[12];

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -4.
  realv vec11 =
    context.grid->readVec (t0 + 0, v0, veci + 0, vecj + 0, veck + -1,
			   __LINE__);

  // Unaligned vector block from grid at t=t0+0 at point 0, 0, -1.
  realv vec12;
  vec12[0] = vec11[12];
  vec12[1] = vec11[13];
  vec12[2] = vec11[14];
  vec12[3] = vec11[15];
  vec12[4] = vec2[0];
  vec12[5] = vec2[1];
  vec12[6] = vec2[2];
  vec12[7] = vec2[3];
  vec12[8] = vec2[4];
  vec12[9] = vec2[5];
  vec12[10] = vec2[6];
  vec12[11] = vec2[7];
  vec12[12] = vec2[8];
  vec12[13] = vec2[9];
  vec12[14] = vec2[10];
  vec12[15] = vec2[11];

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 4.
  realv vec13 =
    context.grid->readVec (t0 + 0, v0, veci + 0, vecj + 0, veck + 1,
			   __LINE__);

  // Unaligned vector block from grid at t=t0+0 at point 0, 0, 1.
  realv vec14;
  vec14[0] = vec2[4];
  vec14[1] = vec2[5];
  vec14[2] = vec2[6];
  vec14[3] = vec2[7];
  vec14[4] = vec2[8];
  vec14[5] = vec2[9];
  vec14[6] = vec2[10];
  vec14[7] = vec2[11];
  vec14[8] = vec2[12];
  vec14[9] = vec2[13];
  vec14[10] = vec2[14];
  vec14[11] = vec2[15];
  vec14[12] = vec13[0];
  vec14[13] = vec13[1];
  vec14[14] = vec13[2];
  vec14[15] = vec13[3];

  // Aligned vector block from grid at t=t0+0 at point -2, 0, 0.
  realv vec15 =
    context.grid->readVec (t0 + 0, v0, veci + -2, vecj + 0, veck + 0,
			   __LINE__);

  // Aligned vector block from grid at t=t0+0 at point 2, 0, 0.
  realv vec16 =
    context.grid->readVec (t0 + 0, v0, veci + 2, vecj + 0, veck + 0,
			   __LINE__);

  // Unaligned vector block from grid at t=t0+0 at point 0, -2, 0.
  realv vec17;
  vec17[0] = vec7[2];
  vec17[1] = vec7[3];
  vec17[2] = vec2[0];
  vec17[3] = vec2[1];
  vec17[4] = vec7[6];
  vec17[5] = vec7[7];
  vec17[6] = vec2[4];
  vec17[7] = vec2[5];
  vec17[8] = vec7[10];
  vec17[9] = vec7[11];
  vec17[10] = vec2[8];
  vec17[11] = vec2[9];
  vec17[12] = vec7[14];
  vec17[13] = vec7[15];
  vec17[14] = vec2[12];
  vec17[15] = vec2[13];

  // Unaligned vector block from grid at t=t0+0 at point 0, 2, 0.
  realv vec18;
  vec18[0] = vec2[2];
  vec18[1] = vec2[3];
  vec18[2] = vec9[0];
  vec18[3] = vec9[1];
  vec18[4] = vec2[6];
  vec18[5] = vec2[7];
  vec18[6] = vec9[4];
  vec18[7] = vec9[5];
  vec18[8] = vec2[10];
  vec18[9] = vec2[11];
  vec18[10] = vec9[8];
  vec18[11] = vec9[9];
  vec18[12] = vec2[14];
  vec18[13] = vec2[15];
  vec18[14] = vec9[12];
  vec18[15] = vec9[13];

  // Unaligned vector block from grid at t=t0+0 at point 0, 0, -2.
  realv vec19;
  vec19[0] = vec11[8];
  vec19[1] = vec11[9];
  vec19[2] = vec11[10];
  vec19[3] = vec11[11];
  vec19[4] = vec11[12];
  vec19[5] = vec11[13];
  vec19[6] = vec11[14];
  vec19[7] = vec11[15];
  vec19[8] = vec2[0];
  vec19[9] = vec2[1];
  vec19[10] = vec2[2];
  vec19[11] = vec2[3];
  vec19[12] = vec2[4];
  vec19[13] = vec2[5];
  vec19[14] = vec2[6];
  vec19[15] = vec2[7];

  // Unaligned vector block from grid at t=t0+0 at point 0, 0, 2.
  realv vec20;
  vec20[0] = vec2[8];
  vec20[1] = vec2[9];
  vec20[2] = vec2[10];
  vec20[3] = vec2[11];
  vec20[4] = vec2[12];
  vec20[5] = vec2[13];
  vec20[6] = vec2[14];
  vec20[7] = vec2[15];
  vec20[8] = vec13[0];
  vec20[9] = vec13[1];
  vec20[10] = vec13[2];
  vec20[11] = vec13[3];
  vec20[12] = vec13[4];
  vec20[13] = vec13[5];
  vec20[14] = vec13[6];
  vec20[15] = vec13[7];

  // Aligned vector block from grid at t=t0+0 at point -3, 0, 0.
  realv vec21 =
    context.grid->readVec (t0 + 0, v0, veci + -3, vecj + 0, veck + 0,
			   __LINE__);

  // Aligned vector block from grid at t=t0+0 at point 3, 0, 0.
  realv vec22 =
    context.grid->readVec (t0 + 0, v0, veci + 3, vecj + 0, veck + 0,
			   __LINE__);

  // Unaligned vector block from grid at t=t0+0 at point 0, -3, 0.
  realv vec23;
  vec23[0] = vec7[1];
  vec23[1] = vec7[2];
  vec23[2] = vec7[3];
  vec23[3] = vec2[0];
  vec23[4] = vec7[5];
  vec23[5] = vec7[6];
  vec23[6] = vec7[7];
  vec23[7] = vec2[4];
  vec23[8] = vec7[9];
  vec23[9] = vec7[10];
  vec23[10] = vec7[11];
  vec23[11] = vec2[8];
  vec23[12] = vec7[13];
  vec23[13] = vec7[14];
  vec23[14] = vec7[15];
  vec23[15] = vec2[12];

  // Unaligned vector block from grid at t=t0+0 at point 0, 3, 0.
  realv vec24;
  vec24[0] = vec2[3];
  vec24[1] = vec9[0];
  vec24[2] = vec9[1];
  vec24[3] = vec9[2];
  vec24[4] = vec2[7];
  vec24[5] = vec9[4];
  vec24[6] = vec9[5];
  vec24[7] = vec9[6];
  vec24[8] = vec2[11];
  vec24[9] = vec9[8];
  vec24[10] = vec9[9];
  vec24[11] = vec9[10];
  vec24[12] = vec2[15];
  vec24[13] = vec9[12];
  vec24[14] = vec9[13];
  vec24[15] = vec9[14];

  // Unaligned vector block from grid at t=t0+0 at point 0, 0, -3.
  realv vec25;
  vec25[0] = vec11[4];
  vec25[1] = vec11[5];
  vec25[2] = vec11[6];
  vec25[3] = vec11[7];
  vec25[4] = vec11[8];
  vec25[5] = vec11[9];
  vec25[6] = vec11[10];
  vec25[7] = vec11[11];
  vec25[8] = vec11[12];
  vec25[9] = vec11[13];
  vec25[10] = vec11[14];
  vec25[11] = vec11[15];
  vec25[12] = vec2[0];
  vec25[13] = vec2[1];
  vec25[14] = vec2[2];
  vec25[15] = vec2[3];

  // Unaligned vector block from grid at t=t0+0 at point 0, 0, 3.
  realv vec26;
  vec26[0] = vec2[12];
  vec26[1] = vec2[13];
  vec26[2] = vec2[14];
  vec26[3] = vec2[15];
  vec26[4] = vec13[0];
  vec26[5] = vec13[1];
  vec26[6] = vec13[2];
  vec26[7] = vec13[3];
  vec26[8] = vec13[4];
  vec26[9] = vec13[5];
  vec26[10] = vec13[6];
  vec26[11] = vec13[7];
  vec26[12] = vec13[8];
  vec26[13] = vec13[9];
  vec26[14] = vec13[10];
  vec26[15] = vec13[11];

  // Aligned vector block from grid at t=t0+0 at point -4, 0, 0.
  realv vec27 =
    context.grid->readVec (t0 + 0, v0, veci + -4, vecj + 0, veck + 0,
			   __LINE__);

  // Aligned vector block from grid at t=t0+0 at point 4, 0, 0.
  realv vec28 =
    context.grid->readVec (t0 + 0, v0, veci + 4, vecj + 0, veck + 0,
			   __LINE__);

  // Aligned vector block from grid at t=t0+0 at point -5, 0, 0.
  realv vec29 =
    context.grid->readVec (t0 + 0, v0, veci + -5, vecj + 0, veck + 0,
			   __LINE__);

  // Aligned vector block from grid at t=t0+0 at point 5, 0, 0.
  realv vec30 =
    context.grid->readVec (t0 + 0, v0, veci + 5, vecj + 0, veck + 0,
			   __LINE__);

  // Aligned vector block from grid at t=t0+0 at point 0, -8, 0.
  realv vec31 =
    context.grid->readVec (t0 + 0, v0, veci + 0, vecj + -2, veck + 0,
			   __LINE__);

  // Unaligned vector block from grid at t=t0+0 at point 0, -5, 0.
  realv vec32;
  vec32[0] = vec31[3];
  vec32[1] = vec7[0];
  vec32[2] = vec7[1];
  vec32[3] = vec7[2];
  vec32[4] = vec31[7];
  vec32[5] = vec7[4];
  vec32[6] = vec7[5];
  vec32[7] = vec7[6];
  vec32[8] = vec31[11];
  vec32[9] = vec7[8];
  vec32[10] = vec7[9];
  vec32[11] = vec7[10];
  vec32[12] = vec31[15];
  vec32[13] = vec7[12];
  vec32[14] = vec7[13];
  vec32[15] = vec7[14];

  // Aligned vector block from grid at t=t0+0 at point 0, 8, 0.
  realv vec33 =
    context.grid->readVec (t0 + 0, v0, veci + 0, vecj + 2, veck + 0,
			   __LINE__);

  // Unaligned vector block from grid at t=t0+0 at point 0, 5, 0.
  realv vec34;
  vec34[0] = vec9[1];
  vec34[1] = vec9[2];
  vec34[2] = vec9[3];
  vec34[3] = vec33[0];
  vec34[4] = vec9[5];
  vec34[5] = vec9[6];
  vec34[6] = vec9[7];
  vec34[7] = vec33[4];
  vec34[8] = vec9[9];
  vec34[9] = vec9[10];
  vec34[10] = vec9[11];
  vec34[11] = vec33[8];
  vec34[12] = vec9[13];
  vec34[13] = vec9[14];
  vec34[14] = vec9[15];
  vec34[15] = vec33[12];

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -8.
  realv vec35 =
    context.grid->readVec (t0 + 0, v0, veci + 0, vecj + 0, veck + -2,
			   __LINE__);

  // Unaligned vector block from grid at t=t0+0 at point 0, 0, -5.
  realv vec36;
  vec36[0] = vec35[12];
  vec36[1] = vec35[13];
  vec36[2] = vec35[14];
  vec36[3] = vec35[15];
  vec36[4] = vec11[0];
  vec36[5] = vec11[1];
  vec36[6] = vec11[2];
  vec36[7] = vec11[3];
  vec36[8] = vec11[4];
  vec36[9] = vec11[5];
  vec36[10] = vec11[6];
  vec36[11] = vec11[7];
  vec36[12] = vec11[8];
  vec36[13] = vec11[9];
  vec36[14] = vec11[10];
  vec36[15] = vec11[11];

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 8.
  realv vec37 =
    context.grid->readVec (t0 + 0, v0, veci + 0, vecj + 0, veck + 2,
			   __LINE__);

  // Unaligned vector block from grid at t=t0+0 at point 0, 0, 5.
  realv vec38;
  vec38[0] = vec13[4];
  vec38[1] = vec13[5];
  vec38[2] = vec13[6];
  vec38[3] = vec13[7];
  vec38[4] = vec13[8];
  vec38[5] = vec13[9];
  vec38[6] = vec13[10];
  vec38[7] = vec13[11];
  vec38[8] = vec13[12];
  vec38[9] = vec13[13];
  vec38[10] = vec13[14];
  vec38[11] = vec13[15];
  vec38[12] = vec37[0];
  vec38[13] = vec37[1];
  vec38[14] = vec37[2];
  vec38[15] = vec37[3];

  // Aligned vector block from grid at t=t0+0 at point -6, 0, 0.
  realv vec39 =
    context.grid->readVec (t0 + 0, v0, veci + -6, vecj + 0, veck + 0,
			   __LINE__);

  // Aligned vector block from grid at t=t0+0 at point 6, 0, 0.
  realv vec40 =
    context.grid->readVec (t0 + 0, v0, veci + 6, vecj + 0, veck + 0,
			   __LINE__);

  // Unaligned vector block from grid at t=t0+0 at point 0, -6, 0.
  realv vec41;
  vec41[0] = vec31[2];
  vec41[1] = vec31[3];
  vec41[2] = vec7[0];
  vec41[3] = vec7[1];
  vec41[4] = vec31[6];
  vec41[5] = vec31[7];
  vec41[6] = vec7[4];
  vec41[7] = vec7[5];
  vec41[8] = vec31[10];
  vec41[9] = vec31[11];
  vec41[10] = vec7[8];
  vec41[11] = vec7[9];
  vec41[12] = vec31[14];
  vec41[13] = vec31[15];
  vec41[14] = vec7[12];
  vec41[15] = vec7[13];

  // Unaligned vector block from grid at t=t0+0 at point 0, 6, 0.
  realv vec42;
  vec42[0] = vec9[2];
  vec42[1] = vec9[3];
  vec42[2] = vec33[0];
  vec42[3] = vec33[1];
  vec42[4] = vec9[6];
  vec42[5] = vec9[7];
  vec42[6] = vec33[4];
  vec42[7] = vec33[5];
  vec42[8] = vec9[10];
  vec42[9] = vec9[11];
  vec42[10] = vec33[8];
  vec42[11] = vec33[9];
  vec42[12] = vec9[14];
  vec42[13] = vec9[15];
  vec42[14] = vec33[12];
  vec42[15] = vec33[13];

  // Unaligned vector block from grid at t=t0+0 at point 0, 0, -6.
  realv vec43;
  vec43[0] = vec35[8];
  vec43[1] = vec35[9];
  vec43[2] = vec35[10];
  vec43[3] = vec35[11];
  vec43[4] = vec35[12];
  vec43[5] = vec35[13];
  vec43[6] = vec35[14];
  vec43[7] = vec35[15];
  vec43[8] = vec11[0];
  vec43[9] = vec11[1];
  vec43[10] = vec11[2];
  vec43[11] = vec11[3];
  vec43[12] = vec11[4];
  vec43[13] = vec11[5];
  vec43[14] = vec11[6];
  vec43[15] = vec11[7];

  // Unaligned vector block from grid at t=t0+0 at point 0, 0, 6.
  realv vec44;
  vec44[0] = vec13[8];
  vec44[1] = vec13[9];
  vec44[2] = vec13[10];
  vec44[3] = vec13[11];
  vec44[4] = vec13[12];
  vec44[5] = vec13[13];
  vec44[6] = vec13[14];
  vec44[7] = vec13[15];
  vec44[8] = vec37[0];
  vec44[9] = vec37[1];
  vec44[10] = vec37[2];
  vec44[11] = vec37[3];
  vec44[12] = vec37[4];
  vec44[13] = vec37[5];
  vec44[14] = vec37[6];
  vec44[15] = vec37[7];

  // Aligned vector block from grid at t=t0+0 at point -7, 0, 0.
  realv vec45 =
    context.grid->readVec (t0 + 0, v0, veci + -7, vecj + 0, veck + 0,
			   __LINE__);

  // Aligned vector block from grid at t=t0+0 at point 7, 0, 0.
  realv vec46 =
    context.grid->readVec (t0 + 0, v0, veci + 7, vecj + 0, veck + 0,
			   __LINE__);

  // Unaligned vector block from grid at t=t0+0 at point 0, -7, 0.
  realv vec47;
  vec47[0] = vec31[1];
  vec47[1] = vec31[2];
  vec47[2] = vec31[3];
  vec47[3] = vec7[0];
  vec47[4] = vec31[5];
  vec47[5] = vec31[6];
  vec47[6] = vec31[7];
  vec47[7] = vec7[4];
  vec47[8] = vec31[9];
  vec47[9] = vec31[10];
  vec47[10] = vec31[11];
  vec47[11] = vec7[8];
  vec47[12] = vec31[13];
  vec47[13] = vec31[14];
  vec47[14] = vec31[15];
  vec47[15] = vec7[12];

  // Unaligned vector block from grid at t=t0+0 at point 0, 7, 0.
  realv vec48;
  vec48[0] = vec9[3];
  vec48[1] = vec33[0];
  vec48[2] = vec33[1];
  vec48[3] = vec33[2];
  vec48[4] = vec9[7];
  vec48[5] = vec33[4];
  vec48[6] = vec33[5];
  vec48[7] = vec33[6];
  vec48[8] = vec9[11];
  vec48[9] = vec33[8];
  vec48[10] = vec33[9];
  vec48[11] = vec33[10];
  vec48[12] = vec9[15];
  vec48[13] = vec33[12];
  vec48[14] = vec33[13];
  vec48[15] = vec33[14];

  // Unaligned vector block from grid at t=t0+0 at point 0, 0, -7.
  realv vec49;
  vec49[0] = vec35[4];
  vec49[1] = vec35[5];
  vec49[2] = vec35[6];
  vec49[3] = vec35[7];
  vec49[4] = vec35[8];
  vec49[5] = vec35[9];
  vec49[6] = vec35[10];
  vec49[7] = vec35[11];
  vec49[8] = vec35[12];
  vec49[9] = vec35[13];
  vec49[10] = vec35[14];
  vec49[11] = vec35[15];
  vec49[12] = vec11[0];
  vec49[13] = vec11[1];
  vec49[14] = vec11[2];
  vec49[15] = vec11[3];

  // Unaligned vector block from grid at t=t0+0 at point 0, 0, 7.
  realv vec50;
  vec50[0] = vec13[12];
  vec50[1] = vec13[13];
  vec50[2] = vec13[14];
  vec50[3] = vec13[15];
  vec50[4] = vec37[0];
  vec50[5] = vec37[1];
  vec50[6] = vec37[2];
  vec50[7] = vec37[3];
  vec50[8] = vec37[4];
  vec50[9] = vec37[5];
  vec50[10] = vec37[6];
  vec50[11] = vec37[7];
  vec50[12] = vec37[8];
  vec50[13] = vec37[9];
  vec50[14] = vec37[10];
  vec50[15] = vec37[11];

  // Aligned vector block from grid at t=t0+0 at point -8, 0, 0.
  realv vec51 =
    context.grid->readVec (t0 + 0, v0, veci + -8, vecj + 0, veck + 0,
			   __LINE__);

  // Aligned vector block from grid at t=t0+0 at point 8, 0, 0.
  realv vec52 =
    context.grid->readVec (t0 + 0, v0, veci + 8, vecj + 0, veck + 0,
			   __LINE__);

  // Aligned vector block from vel at point 0, 0, 0.
  realv vec53 = context.vel->readVec (veci + 0, vecj + 0, veck + 0, __LINE__);
  realv vec54 =
    ((vec1 * vec2) - vec3) +
    (((vec2 * vec4) + ((vec5 + vec6 + vec8 + vec10 + vec12 + vec14) * vec4) +
      ((vec15 + vec16 + vec17 + vec18 + vec19 + vec20) * vec4) +
      ((vec21 + vec22 + vec23 + vec24 + vec25 + vec26) * vec4) +
      ((vec27 + vec28 + vec7 + vec9 + vec11 + vec13) * vec4) +
      ((vec29 + vec30 + vec32 + vec34 + vec36 + vec38) * vec4) +
      ((vec39 + vec40 + vec41 + vec42 + vec43 + vec44) * vec4) +
      ((vec45 + vec46 + vec47 + vec48 + vec49 + vec50) * vec4) +
      ((vec51 + vec52 + vec31 + vec33 + vec35 + vec37) * vec4)) * vec53);

  // Set final result at offset 0, 0, 0.
  context.grid->writeVec (vec54, t0 + TIME_STEPS, v0, veci + 0, vecj + 0,
			  veck + 0, __LINE__);
}

// ==== Prefetch functions ====

// Prefetch vector blocks  to L1 cache.
// For stencil at vector location veci, vecj, veck.
// For 1x4x4 vector-fold.
ALWAYS_INLINE void
prefetch_L1_stencil_vector (StencilContext & context, int t0, int v0,
			    long veci, long vecj, long veck)
{
  const char *p = 0;

  // Aligned vector block from grid at t=t0+-1 at point 0, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + -1, v0, veci + 0, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -7, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -7, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -6, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -6, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -5, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -5, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -4, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -4, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -3, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -3, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -2, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -2, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -1, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -1, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, -8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + -2,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, -4, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + -1,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + -2, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -4.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + -1, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 4.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 1, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 2, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 4, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 1,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 2,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 1, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 1, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 2, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 2, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 3, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 3, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 4, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 4, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 5, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 5, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 6, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 6, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 7, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 7, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from vel at point 0, 0, 0.
  p =
    (const char *) context.vel->getVecPtr (veci + 0, vecj + 0, veck + 0,
					   __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);
}

// Prefetch vector blocks  to L2 cache.
// For stencil at vector location veci, vecj, veck.
// For 1x4x4 vector-fold.
ALWAYS_INLINE void
prefetch_L2_stencil_vector (StencilContext & context, int t0, int v0,
			    long veci, long vecj, long veck)
{
  const char *p = 0;

  // Aligned vector block from grid at t=t0+-1 at point 0, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + -1, v0, veci + 0, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -7, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -7, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -6, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -6, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -5, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -5, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -4, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -4, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -3, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -3, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -2, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -2, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -1, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -1, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, -8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + -2,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, -4, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + -1,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + -2, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -4.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + -1, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 4.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 1, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 2, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 4, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 1,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 2,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 1, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 1, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 2, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 2, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 3, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 3, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 4, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 4, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 5, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 5, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 6, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 6, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 7, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 7, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from vel at point 0, 0, 0.
  p =
    (const char *) context.vel->getVecPtr (veci + 0, vecj + 0, veck + 0,
					   __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);
}



// Prefetch vector blocks for leading edge in +x direction to L1 cache.
// For stencil at vector location veci, vecj, veck.
// For 1x4x4 vector-fold.
ALWAYS_INLINE void
prefetch_L1_stencil_vector_x (StencilContext & context, int t0, int v0,
			      long veci, long vecj, long veck)
{
  const char *p = 0;

  // Aligned vector block from grid at t=t0+-1 at point 0, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + -1, v0, veci + 0, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, -8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + -2,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, -4, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + -1,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + -2, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -4.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + -1, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 4.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 1, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 2, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 4, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 1,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 2,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from vel at point 0, 0, 0.
  p =
    (const char *) context.vel->getVecPtr (veci + 0, vecj + 0, veck + 0,
					   __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);
}

// Prefetch vector blocks for leading edge in +x direction to L2 cache.
// For stencil at vector location veci, vecj, veck.
// For 1x4x4 vector-fold.
ALWAYS_INLINE void
prefetch_L2_stencil_vector_x (StencilContext & context, int t0, int v0,
			      long veci, long vecj, long veck)
{
  const char *p = 0;

  // Aligned vector block from grid at t=t0+-1 at point 0, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + -1, v0, veci + 0, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, -8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + -2,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, -4, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + -1,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + -2, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -4.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + -1, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 4.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 1, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 2, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 4, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 1,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 2,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from vel at point 0, 0, 0.
  p =
    (const char *) context.vel->getVecPtr (veci + 0, vecj + 0, veck + 0,
					   __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);
}



// Prefetch vector blocks for leading edge in +y direction to L1 cache.
// For stencil at vector location veci, vecj, veck.
// For 1x4x4 vector-fold.
ALWAYS_INLINE void
prefetch_L1_stencil_vector_y (StencilContext & context, int t0, int v0,
			      long veci, long vecj, long veck)
{
  const char *p = 0;

  // Aligned vector block from grid at t=t0+-1 at point 0, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + -1, v0, veci + 0, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -7, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -7, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -6, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -6, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -5, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -5, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -4, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -4, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -3, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -3, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -2, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -2, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -1, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -1, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + -2, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -4.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + -1, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 4.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 1, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 2, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 2,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 1, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 1, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 2, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 2, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 3, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 3, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 4, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 4, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 5, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 5, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 6, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 6, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 7, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 7, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from vel at point 0, 0, 0.
  p =
    (const char *) context.vel->getVecPtr (veci + 0, vecj + 0, veck + 0,
					   __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);
}

// Prefetch vector blocks for leading edge in +y direction to L2 cache.
// For stencil at vector location veci, vecj, veck.
// For 1x4x4 vector-fold.
ALWAYS_INLINE void
prefetch_L2_stencil_vector_y (StencilContext & context, int t0, int v0,
			      long veci, long vecj, long veck)
{
  const char *p = 0;

  // Aligned vector block from grid at t=t0+-1 at point 0, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + -1, v0, veci + 0, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -7, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -7, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -6, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -6, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -5, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -5, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -4, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -4, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -3, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -3, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -2, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -2, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -1, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -1, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + -2, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, -4.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + -1, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 4.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 1, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 2, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 2,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 1, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 1, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 2, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 2, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 3, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 3, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 4, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 4, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 5, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 5, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 6, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 6, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 7, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 7, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from vel at point 0, 0, 0.
  p =
    (const char *) context.vel->getVecPtr (veci + 0, vecj + 0, veck + 0,
					   __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);
}



// Prefetch vector blocks for leading edge in +z direction to L1 cache.
// For stencil at vector location veci, vecj, veck.
// For 1x4x4 vector-fold.
ALWAYS_INLINE void
prefetch_L1_stencil_vector_z (StencilContext & context, int t0, int v0,
			      long veci, long vecj, long veck)
{
  const char *p = 0;

  // Aligned vector block from grid at t=t0+-1 at point 0, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + -1, v0, veci + 0, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -7, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -7, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -6, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -6, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -5, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -5, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -4, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -4, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -3, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -3, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -2, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -2, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point -1, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -1, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, -8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + -2,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, -4, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + -1,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 2, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 4, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 1,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 0, 8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 2,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 1, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 1, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 2, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 2, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 3, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 3, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 4, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 4, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 5, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 5, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 6, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 6, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 7, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 7, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from grid at t=t0+0 at point 8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);

  // Aligned vector block from vel at point 0, 0, 0.
  p =
    (const char *) context.vel->getVecPtr (veci + 0, vecj + 0, veck + 0,
					   __LINE__);
  MCP (p, L1, __LINE__);
  _mm_prefetch (p, L1);
}

// Prefetch vector blocks for leading edge in +z direction to L2 cache.
// For stencil at vector location veci, vecj, veck.
// For 1x4x4 vector-fold.
ALWAYS_INLINE void
prefetch_L2_stencil_vector_z (StencilContext & context, int t0, int v0,
			      long veci, long vecj, long veck)
{
  const char *p = 0;

  // Aligned vector block from grid at t=t0+-1 at point 0, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + -1, v0, veci + 0, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -7, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -7, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -6, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -6, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -5, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -5, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -4, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -4, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -3, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -3, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -2, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -2, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point -1, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + -1, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, -8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + -2,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, -4, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + -1,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 0, 8.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 0,
					    veck + 2, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 4, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 1,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 0, 8, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 0, vecj + 2,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 1, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 1, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 2, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 2, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 3, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 3, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 4, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 4, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 5, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 5, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 6, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 6, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 7, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 7, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from grid at t=t0+0 at point 8, 0, 0.
  p =
    (const char *) context.grid->getVecPtr (t0 + 0, v0, veci + 8, vecj + 0,
					    veck + 0, __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);

  // Aligned vector block from vel at point 0, 0, 0.
  p =
    (const char *) context.vel->getVecPtr (veci + 0, vecj + 0, veck + 0,
					   __LINE__);
  MCP (p, L2, __LINE__);
  _mm_prefetch (p, L2);
}
