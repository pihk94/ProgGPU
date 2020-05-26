/**********************************************************************
Lokman A. Abbas-Turki code

Those who re-use this code should mention in their code 
the name of the author above.
**********************************************************************/

#ifndef __CONSTANTS_TYPES__
#define __CONSTANTS_TYPES__

////////////////Algorithm Parameters///////////////
#define NbOuter (32)	              //Number of MC trajectories for outer simulation
#define NbInner (32)                //Number of MC trajectories for inner simulation

// Pi approximation needed in some kernels
#define MoPI (3.1415927f)
////////////////////////////////////////////////////////////////
// L'Eucuyer CMRG Matrix Values
////////////////////////////////////////////////////////////////
// First MRG
#define a12 63308
#define a13 -183326
#define q12 33921
#define q13 11714
#define r12 12979
#define r13 2883

// Second MRG
#define a21 86098
#define a23 -539608
#define q21 24919
#define q23 3976
#define r21 7417
#define r23 2071

// Normalization variables
#define Invmp 4.6566129e-10f
#define two17 131072.0
#define two53 9007199254740992.0
typedef int TabSeedCMRG_t[NbOuter][NbInner][6];
typedef float Tab2RNG_t[NbOuter][NbInner][2];

#endif