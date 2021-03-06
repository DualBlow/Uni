/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SOCKET_H_RPCGEN
#define _SOCKET_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct variables {
	int a;
	struct {
		u_int array_Y_len;
		int *array_Y_val;
	} array_Y;
	int len;
};
typedef struct variables variables;

struct minMax {
	int min;
	int max;
};
typedef struct minMax minMax;

struct ginomeno {
	struct {
		u_int resultArray_len;
		int *resultArray_val;
	} resultArray;
};
typedef struct ginomeno ginomeno;

#define SOCKET_PROG 0x23451111
#define SOCKET_VER 1

#if defined(__STDC__) || defined(__cplusplus)
#define AVERAGE 1
extern  double * average_1(variables *, CLIENT *);
extern  double * average_1_svc(variables *, struct svc_req *);
#define MIN_MAX 2
extern  minMax * min_max_1(variables *, CLIENT *);
extern  minMax * min_max_1_svc(variables *, struct svc_req *);
#define MULTIPLY 3
extern  ginomeno * multiply_1(variables *, CLIENT *);
extern  ginomeno * multiply_1_svc(variables *, struct svc_req *);
extern int socket_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define AVERAGE 1
extern  double * average_1();
extern  double * average_1_svc();
#define MIN_MAX 2
extern  minMax * min_max_1();
extern  minMax * min_max_1_svc();
#define MULTIPLY 3
extern  ginomeno * multiply_1();
extern  ginomeno * multiply_1_svc();
extern int socket_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_variables (XDR *, variables*);
extern  bool_t xdr_minMax (XDR *, minMax*);
extern  bool_t xdr_ginomeno (XDR *, ginomeno*);

#else /* K&R C */
extern bool_t xdr_variables ();
extern bool_t xdr_minMax ();
extern bool_t xdr_ginomeno ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SOCKET_H_RPCGEN */
