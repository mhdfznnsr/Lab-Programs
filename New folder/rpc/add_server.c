/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "add.h"

int *
add_1_svc(intpair *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	result = argp->a + argp->b;
	printf("add(%d,%d) = %d\n",argp->a,argp->b,result);
	return &result;
}
