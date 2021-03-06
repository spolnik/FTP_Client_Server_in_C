/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "ftp.h"
#ifndef _KERNEL
#include <stdio.h>
#include <stdlib.h> /* getenv, exit */
#endif /* !_KERNEL */

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

enum clnt_stat 
init_1(void *argp, catalog_state *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, init,
		(xdrproc_t) xdr_void, (caddr_t) argp,
		(xdrproc_t) xdr_catalog_state, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
cd_1(file_info *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, cd,
		(xdrproc_t) xdr_file_info, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
ls_1(file_info *argp, catalog_state *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, ls,
		(xdrproc_t) xdr_file_info, (caddr_t) argp,
		(xdrproc_t) xdr_catalog_state, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
scp_1(file_info *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, scp,
		(xdrproc_t) xdr_file_info, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
wget_1(file_info *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, wget,
		(xdrproc_t) xdr_file_info, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
get_file_1(file_info *argp, file_content_info *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, get_file,
		(xdrproc_t) xdr_file_info, (caddr_t) argp,
		(xdrproc_t) xdr_file_content_info, (caddr_t) clnt_res,
		TIMEOUT));
}

enum clnt_stat 
send_file_1(file_content_info *argp, int *clnt_res, CLIENT *clnt)
{
	return (clnt_call(clnt, send_file,
		(xdrproc_t) xdr_file_content_info, (caddr_t) argp,
		(xdrproc_t) xdr_int, (caddr_t) clnt_res,
		TIMEOUT));
}
