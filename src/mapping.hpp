// Automatically generated; do not edit.

// 2-D <-> 1-D mapping macros.
// 'MAP' macros return 1-D offset from 2-D 'j' indices.
// 'UNMAP' macros set 2 'j' indices based on 1-D 'ai' input.
#define MAP12(j1, j2, d1, d2) ((j1)*(d2) + (j2))
#define UNMAP12(ai, j1, j2, d1, d2) (j1 = (ai)/((d2)), j2 = (ai)%(d2))
#define MAP21(j1, j2, d1, d2) ((j2)*(d1) + (j1))
#define UNMAP21(ai, j1, j2, d1, d2) (j2 = (ai)/((d1)), j1 = (ai)%(d1))

// 3-D <-> 1-D mapping macros.
// 'MAP' macros return 1-D offset from 3-D 'j' indices.
// 'UNMAP' macros set 3 'j' indices based on 1-D 'ai' input.
#define MAP123(j1, j2, j3, d1, d2, d3) ((j1)*(d2)*(d3) + (j2)*(d3) + (j3))
#define UNMAP123(ai, j1, j2, j3, d1, d2, d3) (j1 = (ai)/((d2)*(d3)), j2 = (ai)/((d3))%(d2), j3 = (ai)%(d3))
#define MAP132(j1, j2, j3, d1, d2, d3) ((j1)*(d3)*(d2) + (j3)*(d2) + (j2))
#define UNMAP132(ai, j1, j2, j3, d1, d2, d3) (j1 = (ai)/((d3)*(d2)), j3 = (ai)/((d2))%(d3), j2 = (ai)%(d2))
#define MAP213(j1, j2, j3, d1, d2, d3) ((j2)*(d1)*(d3) + (j1)*(d3) + (j3))
#define UNMAP213(ai, j1, j2, j3, d1, d2, d3) (j2 = (ai)/((d1)*(d3)), j1 = (ai)/((d3))%(d1), j3 = (ai)%(d3))
#define MAP231(j1, j2, j3, d1, d2, d3) ((j2)*(d3)*(d1) + (j3)*(d1) + (j1))
#define UNMAP231(ai, j1, j2, j3, d1, d2, d3) (j2 = (ai)/((d3)*(d1)), j3 = (ai)/((d1))%(d3), j1 = (ai)%(d1))
#define MAP312(j1, j2, j3, d1, d2, d3) ((j3)*(d1)*(d2) + (j1)*(d2) + (j2))
#define UNMAP312(ai, j1, j2, j3, d1, d2, d3) (j3 = (ai)/((d1)*(d2)), j1 = (ai)/((d2))%(d1), j2 = (ai)%(d2))
#define MAP321(j1, j2, j3, d1, d2, d3) ((j3)*(d2)*(d1) + (j2)*(d1) + (j1))
#define UNMAP321(ai, j1, j2, j3, d1, d2, d3) (j3 = (ai)/((d2)*(d1)), j2 = (ai)/((d1))%(d2), j1 = (ai)%(d1))

// 4-D <-> 1-D mapping macros.
// 'MAP' macros return 1-D offset from 4-D 'j' indices.
// 'UNMAP' macros set 4 'j' indices based on 1-D 'ai' input.
#define MAP1234(j1, j2, j3, j4, d1, d2, d3, d4) ((j1)*(d2)*(d3)*(d4) + (j2)*(d3)*(d4) + (j3)*(d4) + (j4))
#define UNMAP1234(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j1 = (ai)/((d2)*(d3)*(d4)), j2 = (ai)/((d3)*(d4))%(d2), j3 = (ai)/((d4))%(d3), j4 = (ai)%(d4))
#define MAP1243(j1, j2, j3, j4, d1, d2, d3, d4) ((j1)*(d2)*(d4)*(d3) + (j2)*(d4)*(d3) + (j4)*(d3) + (j3))
#define UNMAP1243(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j1 = (ai)/((d2)*(d4)*(d3)), j2 = (ai)/((d4)*(d3))%(d2), j4 = (ai)/((d3))%(d4), j3 = (ai)%(d3))
#define MAP1324(j1, j2, j3, j4, d1, d2, d3, d4) ((j1)*(d3)*(d2)*(d4) + (j3)*(d2)*(d4) + (j2)*(d4) + (j4))
#define UNMAP1324(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j1 = (ai)/((d3)*(d2)*(d4)), j3 = (ai)/((d2)*(d4))%(d3), j2 = (ai)/((d4))%(d2), j4 = (ai)%(d4))
#define MAP1342(j1, j2, j3, j4, d1, d2, d3, d4) ((j1)*(d3)*(d4)*(d2) + (j3)*(d4)*(d2) + (j4)*(d2) + (j2))
#define UNMAP1342(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j1 = (ai)/((d3)*(d4)*(d2)), j3 = (ai)/((d4)*(d2))%(d3), j4 = (ai)/((d2))%(d4), j2 = (ai)%(d2))
#define MAP1423(j1, j2, j3, j4, d1, d2, d3, d4) ((j1)*(d4)*(d2)*(d3) + (j4)*(d2)*(d3) + (j2)*(d3) + (j3))
#define UNMAP1423(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j1 = (ai)/((d4)*(d2)*(d3)), j4 = (ai)/((d2)*(d3))%(d4), j2 = (ai)/((d3))%(d2), j3 = (ai)%(d3))
#define MAP1432(j1, j2, j3, j4, d1, d2, d3, d4) ((j1)*(d4)*(d3)*(d2) + (j4)*(d3)*(d2) + (j3)*(d2) + (j2))
#define UNMAP1432(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j1 = (ai)/((d4)*(d3)*(d2)), j4 = (ai)/((d3)*(d2))%(d4), j3 = (ai)/((d2))%(d3), j2 = (ai)%(d2))
#define MAP2134(j1, j2, j3, j4, d1, d2, d3, d4) ((j2)*(d1)*(d3)*(d4) + (j1)*(d3)*(d4) + (j3)*(d4) + (j4))
#define UNMAP2134(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j2 = (ai)/((d1)*(d3)*(d4)), j1 = (ai)/((d3)*(d4))%(d1), j3 = (ai)/((d4))%(d3), j4 = (ai)%(d4))
#define MAP2143(j1, j2, j3, j4, d1, d2, d3, d4) ((j2)*(d1)*(d4)*(d3) + (j1)*(d4)*(d3) + (j4)*(d3) + (j3))
#define UNMAP2143(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j2 = (ai)/((d1)*(d4)*(d3)), j1 = (ai)/((d4)*(d3))%(d1), j4 = (ai)/((d3))%(d4), j3 = (ai)%(d3))
#define MAP2314(j1, j2, j3, j4, d1, d2, d3, d4) ((j2)*(d3)*(d1)*(d4) + (j3)*(d1)*(d4) + (j1)*(d4) + (j4))
#define UNMAP2314(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j2 = (ai)/((d3)*(d1)*(d4)), j3 = (ai)/((d1)*(d4))%(d3), j1 = (ai)/((d4))%(d1), j4 = (ai)%(d4))
#define MAP2341(j1, j2, j3, j4, d1, d2, d3, d4) ((j2)*(d3)*(d4)*(d1) + (j3)*(d4)*(d1) + (j4)*(d1) + (j1))
#define UNMAP2341(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j2 = (ai)/((d3)*(d4)*(d1)), j3 = (ai)/((d4)*(d1))%(d3), j4 = (ai)/((d1))%(d4), j1 = (ai)%(d1))
#define MAP2413(j1, j2, j3, j4, d1, d2, d3, d4) ((j2)*(d4)*(d1)*(d3) + (j4)*(d1)*(d3) + (j1)*(d3) + (j3))
#define UNMAP2413(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j2 = (ai)/((d4)*(d1)*(d3)), j4 = (ai)/((d1)*(d3))%(d4), j1 = (ai)/((d3))%(d1), j3 = (ai)%(d3))
#define MAP2431(j1, j2, j3, j4, d1, d2, d3, d4) ((j2)*(d4)*(d3)*(d1) + (j4)*(d3)*(d1) + (j3)*(d1) + (j1))
#define UNMAP2431(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j2 = (ai)/((d4)*(d3)*(d1)), j4 = (ai)/((d3)*(d1))%(d4), j3 = (ai)/((d1))%(d3), j1 = (ai)%(d1))
#define MAP3124(j1, j2, j3, j4, d1, d2, d3, d4) ((j3)*(d1)*(d2)*(d4) + (j1)*(d2)*(d4) + (j2)*(d4) + (j4))
#define UNMAP3124(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j3 = (ai)/((d1)*(d2)*(d4)), j1 = (ai)/((d2)*(d4))%(d1), j2 = (ai)/((d4))%(d2), j4 = (ai)%(d4))
#define MAP3142(j1, j2, j3, j4, d1, d2, d3, d4) ((j3)*(d1)*(d4)*(d2) + (j1)*(d4)*(d2) + (j4)*(d2) + (j2))
#define UNMAP3142(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j3 = (ai)/((d1)*(d4)*(d2)), j1 = (ai)/((d4)*(d2))%(d1), j4 = (ai)/((d2))%(d4), j2 = (ai)%(d2))
#define MAP3214(j1, j2, j3, j4, d1, d2, d3, d4) ((j3)*(d2)*(d1)*(d4) + (j2)*(d1)*(d4) + (j1)*(d4) + (j4))
#define UNMAP3214(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j3 = (ai)/((d2)*(d1)*(d4)), j2 = (ai)/((d1)*(d4))%(d2), j1 = (ai)/((d4))%(d1), j4 = (ai)%(d4))
#define MAP3241(j1, j2, j3, j4, d1, d2, d3, d4) ((j3)*(d2)*(d4)*(d1) + (j2)*(d4)*(d1) + (j4)*(d1) + (j1))
#define UNMAP3241(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j3 = (ai)/((d2)*(d4)*(d1)), j2 = (ai)/((d4)*(d1))%(d2), j4 = (ai)/((d1))%(d4), j1 = (ai)%(d1))
#define MAP3412(j1, j2, j3, j4, d1, d2, d3, d4) ((j3)*(d4)*(d1)*(d2) + (j4)*(d1)*(d2) + (j1)*(d2) + (j2))
#define UNMAP3412(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j3 = (ai)/((d4)*(d1)*(d2)), j4 = (ai)/((d1)*(d2))%(d4), j1 = (ai)/((d2))%(d1), j2 = (ai)%(d2))
#define MAP3421(j1, j2, j3, j4, d1, d2, d3, d4) ((j3)*(d4)*(d2)*(d1) + (j4)*(d2)*(d1) + (j2)*(d1) + (j1))
#define UNMAP3421(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j3 = (ai)/((d4)*(d2)*(d1)), j4 = (ai)/((d2)*(d1))%(d4), j2 = (ai)/((d1))%(d2), j1 = (ai)%(d1))
#define MAP4123(j1, j2, j3, j4, d1, d2, d3, d4) ((j4)*(d1)*(d2)*(d3) + (j1)*(d2)*(d3) + (j2)*(d3) + (j3))
#define UNMAP4123(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j4 = (ai)/((d1)*(d2)*(d3)), j1 = (ai)/((d2)*(d3))%(d1), j2 = (ai)/((d3))%(d2), j3 = (ai)%(d3))
#define MAP4132(j1, j2, j3, j4, d1, d2, d3, d4) ((j4)*(d1)*(d3)*(d2) + (j1)*(d3)*(d2) + (j3)*(d2) + (j2))
#define UNMAP4132(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j4 = (ai)/((d1)*(d3)*(d2)), j1 = (ai)/((d3)*(d2))%(d1), j3 = (ai)/((d2))%(d3), j2 = (ai)%(d2))
#define MAP4213(j1, j2, j3, j4, d1, d2, d3, d4) ((j4)*(d2)*(d1)*(d3) + (j2)*(d1)*(d3) + (j1)*(d3) + (j3))
#define UNMAP4213(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j4 = (ai)/((d2)*(d1)*(d3)), j2 = (ai)/((d1)*(d3))%(d2), j1 = (ai)/((d3))%(d1), j3 = (ai)%(d3))
#define MAP4231(j1, j2, j3, j4, d1, d2, d3, d4) ((j4)*(d2)*(d3)*(d1) + (j2)*(d3)*(d1) + (j3)*(d1) + (j1))
#define UNMAP4231(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j4 = (ai)/((d2)*(d3)*(d1)), j2 = (ai)/((d3)*(d1))%(d2), j3 = (ai)/((d1))%(d3), j1 = (ai)%(d1))
#define MAP4312(j1, j2, j3, j4, d1, d2, d3, d4) ((j4)*(d3)*(d1)*(d2) + (j3)*(d1)*(d2) + (j1)*(d2) + (j2))
#define UNMAP4312(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j4 = (ai)/((d3)*(d1)*(d2)), j3 = (ai)/((d1)*(d2))%(d3), j1 = (ai)/((d2))%(d1), j2 = (ai)%(d2))
#define MAP4321(j1, j2, j3, j4, d1, d2, d3, d4) ((j4)*(d3)*(d2)*(d1) + (j3)*(d2)*(d1) + (j2)*(d1) + (j1))
#define UNMAP4321(ai, j1, j2, j3, j4, d1, d2, d3, d4) (j4 = (ai)/((d3)*(d2)*(d1)), j3 = (ai)/((d2)*(d1))%(d3), j2 = (ai)/((d1))%(d2), j1 = (ai)%(d1))
