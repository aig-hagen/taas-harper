/* ============================================================================================================== */
/* == BEGIN FILE ================================================================================================ */
/* ============================================================================================================== */
/*
 ============================================================================
 Name        : taas-harper.c
 Author      : Matthias Thimm
 Version     : 2.0
 Copyright   : GPL3
 Description : The taas-harper solver for abstract argumentation.

============================================================================
*/
#define COMPUTATION_FINISHED 0
#define COMPUTATION_ABORTED__ANSWER_YES 1
#define COMPUTATION_ABORTED__ANSWER_NO  2
#define COMPUTATION_ABORTED__ANSWER_EMPTYSET  3
#define COMPUTATION_ABORTED__ANSWER_EMPTYEMPTYSET  4
#define COMPUTATION_FINISHED__EMPTY_GROUNDED  5
#define COMPUTATION_FINISHED__NONEMPTY_GROUNDED  6
#define COMPUTATION_FINISHED__ANSWER_NO  7

#define TRUE 1
#define FALSE 0
/* ============================================================================================================== */
/* ============================================================================================================== */
#include <stdio.h>
#include <ctype.h>
#include <glib.h>

#include "util/bitset.c"
#include "util/miscutil.c"

#include "taas/taas_aaf.c"
#include "taas/taas_inout.c"
#include "taas/taas_labeling.c"
#include "taas/taas_basics.c"

/* ============================================================================================================== */
/* ============================================================================================================== */

/**
 * Nothing to solve any more at this point
 */
void solve(struct TaskSpecification *task, struct AAF* aaf, struct Labeling* grounded){
  // this should never be reached
  printf("Task is not support\n");
  return;
}

/* ============================================================================================================== */
int main(int argc, char *argv[]){
  // General solver information
	struct SolverInformation *info = taas__solverinformation(
			"taas-harper v2.0 (2020-10-02)\nMatthias Thimm (thimm@uni-koblenz.de)",
			"[tgf]",
			"[SE-GR,EE-GR,DC-GR,DS-GR,SE-CO,DS-CO]"
		);
  return taas__solve(argc,argv,info,solve);
}

/* ============================================================================================================== */
/* == END FILE ================================================================================================== */
/* ============================================================================================================== */
