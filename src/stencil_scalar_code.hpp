// Automatically generated code; do not edit.

// Calculate one result for order 16 iso3dfd stencil at time t0 + TIME_STEPS, work variable v0, and scalar location i, j, k.
void
calc_stencil_scalar (StencilContext & context, int t0, int v0, int i, int j,
		     int k)
{

  // Evaluate the expression '(((2 * grid(0, 0, 0, 0, 0)) - grid(-1, 0, 0, 0, 0)) + (((grid(0, 0, 0, 0, 0) * -0.00366581) + ((grid(0, 0, -1, 0, 0) + grid(0, 0, 1, 0, 0) + grid(0, 0, 0, -1, 0) + grid(0, 0, 0, 1, 0) + grid(0, 0, 0, 0, -1) + grid(0, 0, 0, 0, 1)) * -0.00366581) + ((grid(0, 0, -2, 0, 0) + grid(0, 0, 2, 0, 0) + grid(0, 0, 0, -2, 0) + grid(0, 0, 0, 2, 0) + grid(0, 0, 0, 0, -2) + grid(0, 0, 0, 0, 2)) * -0.00366581) + ((grid(0, 0, -3, 0, 0) + grid(0, 0, 3, 0, 0) + grid(0, 0, 0, -3, 0) + grid(0, 0, 0, 3, 0) + grid(0, 0, 0, 0, -3) + grid(0, 0, 0, 0, 3)) * -0.00366581) + ((grid(0, 0, -4, 0, 0) + grid(0, 0, 4, 0, 0) + grid(0, 0, 0, -4, 0) + grid(0, 0, 0, 4, 0) + grid(0, 0, 0, 0, -4) + grid(0, 0, 0, 0, 4)) * -0.00366581) + ((grid(0, 0, -5, 0, 0) + grid(0, 0, 5, 0, 0) + grid(0, 0, 0, -5, 0) + grid(0, 0, 0, 5, 0) + grid(0, 0, 0, 0, -5) + grid(0, 0, 0, 0, 5)) * -0.00366581) + ((grid(0, 0, -6, 0, 0) + grid(0, 0, 6, 0, 0) + grid(0, 0, 0, -6, 0) + grid(0, 0, 0, 6, 0) + grid(0, 0, 0, 0, -6) + grid(0, 0, 0, 0, 6)) * -0.00366581) + ((grid(0, 0, -7, 0, 0) + grid(0, 0, 7, 0, 0) + grid(0, 0, 0, -7, 0) + grid(0, 0, 0, 7, 0) + grid(0, 0, 0, 0, -7) + grid(0, 0, 0, 0, 7)) * -0.00366581) + ((grid(0, 0, -8, 0, 0) + grid(0, 0, 8, 0, 0) + grid(0, 0, 0, -8, 0) + grid(0, 0, 0, 8, 0) + grid(0, 0, 0, 0, -8) + grid(0, 0, 0, 0, 8)) * -0.00366581)) * vel(0, 0, 0)))'...
  REAL var1 =
    (context.grid->readVal (t0 + 0, v0, i + 0, j + 0, k + 0, __LINE__) *
     -3.66581352000000006e-03) +
    ((context.grid->readVal (t0 + 0, v0, i + -1, j + 0, k + 0, __LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 1, j + 0, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + -1,
								k + 0,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 1, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + 0,
								k + -1,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 0, k + 1,
			     __LINE__)) * -3.66581352000000006e-03);
  REAL var2 =
    var1 +
    ((context.grid->readVal (t0 + 0, v0, i + -2, j + 0, k + 0, __LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 2, j + 0, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + -2,
								k + 0,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 2, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + 0,
								k + -2,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 0, k + 2,
			     __LINE__)) * -3.66581352000000006e-03);
  REAL var3 =
    var2 +
    ((context.grid->readVal (t0 + 0, v0, i + -3, j + 0, k + 0, __LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 3, j + 0, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + -3,
								k + 0,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 3, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + 0,
								k + -3,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 0, k + 3,
			     __LINE__)) * -3.66581352000000006e-03);
  REAL var4 =
    var3 +
    ((context.grid->readVal (t0 + 0, v0, i + -4, j + 0, k + 0, __LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 4, j + 0, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + -4,
								k + 0,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 4, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + 0,
								k + -4,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 0, k + 4,
			     __LINE__)) * -3.66581352000000006e-03);
  REAL var5 =
    var4 +
    ((context.grid->readVal (t0 + 0, v0, i + -5, j + 0, k + 0, __LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 5, j + 0, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + -5,
								k + 0,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 5, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + 0,
								k + -5,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 0, k + 5,
			     __LINE__)) * -3.66581352000000006e-03);
  REAL var6 =
    var5 +
    ((context.grid->readVal (t0 + 0, v0, i + -6, j + 0, k + 0, __LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 6, j + 0, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + -6,
								k + 0,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 6, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + 0,
								k + -6,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 0, k + 6,
			     __LINE__)) * -3.66581352000000006e-03);
  REAL var7 =
    var6 +
    ((context.grid->readVal (t0 + 0, v0, i + -7, j + 0, k + 0, __LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 7, j + 0, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + -7,
								k + 0,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 7, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + 0,
								k + -7,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 0, k + 7,
			     __LINE__)) * -3.66581352000000006e-03);
  REAL var8 =
    var7 +
    ((context.grid->readVal (t0 + 0, v0, i + -8, j + 0, k + 0, __LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 8, j + 0, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + -8,
								k + 0,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 8, k + 0,
			     __LINE__) + context.grid->readVal (t0 + 0, v0,
								i + 0, j + 0,
								k + -8,
								__LINE__) +
      context.grid->readVal (t0 + 0, v0, i + 0, j + 0, k + 8,
			     __LINE__)) * -3.66581352000000006e-03);
  REAL var9 = var8 * context.vel->readVal (i + 0, j + 0, k + 0, __LINE__);
  REAL var10 =
    ((2.00000000000000000e+00 *
      context.grid->readVal (t0 + 0, v0, i + 0, j + 0, k + 0,
			     __LINE__)) - context.grid->readVal (t0 + -1, v0,
								 i + 0, j + 0,
								 k + 0,
								 __LINE__)) +
    var9;

  // Set final result.
  context.grid->writeVal (var10, t0 + TIME_STEPS, v0, i, j, k);
}
