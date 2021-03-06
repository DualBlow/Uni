/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "socket.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

double *
average_1(variables *argp, CLIENT *clnt)
{
	static double clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, AVERAGE,
		(xdrproc_t) xdr_variables, (caddr_t) argp,
		(xdrproc_t) xdr_double, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

minMax *
min_max_1(variables *argp, CLIENT *clnt)
{
	static minMax clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, MIN_MAX,
		(xdrproc_t) xdr_variables, (caddr_t) argp,
		(xdrproc_t) xdr_minMax, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

ginomeno *
multiply_1(variables *argp, CLIENT *clnt)
{
	static ginomeno clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, MULTIPLY,
		(xdrproc_t) xdr_variables, (caddr_t) argp,
		(xdrproc_t) xdr_ginomeno, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
