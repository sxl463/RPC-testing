/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "authcheck.h"

bool_t
xdr_auth_check2_out (XDR *xdrs, auth_check2_out *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->ret))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_shttpd_conn (XDR *xdrs, shttpd_conn *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		 if (!xdr_string (xdrs, &objp->dirname, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->authorization, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->hostdir, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->remoteuser, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->encodedurl, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->useragent, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->charset, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->protocol, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->p3p, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->response, 500))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 15 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->global_passwd))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->vhost))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->maxremoteuser))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->method))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->should_linger))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->status))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->mime_flag))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->max_age))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->got_range))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->maxresponse))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->responselen))
				 return FALSE;
			 if (!xdr_long (xdrs, &objp->first_byte_index))
				 return FALSE;
			 if (!xdr_long (xdrs, &objp->last_byte_index))
				 return FALSE;
			 if (!xdr_long (xdrs, &objp->bytes_to_send))
				 return FALSE;
			 if (!xdr_long (xdrs, &objp->range_if))
				 return FALSE;
		} else {
			IXDR_PUT_LONG(buf, objp->global_passwd);
			IXDR_PUT_LONG(buf, objp->vhost);
			IXDR_PUT_LONG(buf, objp->maxremoteuser);
			IXDR_PUT_LONG(buf, objp->method);
			IXDR_PUT_LONG(buf, objp->should_linger);
			IXDR_PUT_LONG(buf, objp->status);
			IXDR_PUT_LONG(buf, objp->mime_flag);
			IXDR_PUT_LONG(buf, objp->max_age);
			IXDR_PUT_LONG(buf, objp->got_range);
			IXDR_PUT_LONG(buf, objp->maxresponse);
			IXDR_PUT_LONG(buf, objp->responselen);
			IXDR_PUT_LONG(buf, objp->first_byte_index);
			IXDR_PUT_LONG(buf, objp->last_byte_index);
			IXDR_PUT_LONG(buf, objp->bytes_to_send);
			IXDR_PUT_LONG(buf, objp->range_if);
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		 if (!xdr_string (xdrs, &objp->dirname, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->authorization, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->hostdir, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->remoteuser, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->encodedurl, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->useragent, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->charset, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->protocol, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->p3p, 100))
			 return FALSE;
		 if (!xdr_string (xdrs, &objp->response, 500))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 15 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->global_passwd))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->vhost))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->maxremoteuser))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->method))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->should_linger))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->status))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->mime_flag))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->max_age))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->got_range))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->maxresponse))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->responselen))
				 return FALSE;
			 if (!xdr_long (xdrs, &objp->first_byte_index))
				 return FALSE;
			 if (!xdr_long (xdrs, &objp->last_byte_index))
				 return FALSE;
			 if (!xdr_long (xdrs, &objp->bytes_to_send))
				 return FALSE;
			 if (!xdr_long (xdrs, &objp->range_if))
				 return FALSE;
		} else {
			objp->global_passwd = IXDR_GET_LONG(buf);
			objp->vhost = IXDR_GET_LONG(buf);
			objp->maxremoteuser = IXDR_GET_LONG(buf);
			objp->method = IXDR_GET_LONG(buf);
			objp->should_linger = IXDR_GET_LONG(buf);
			objp->status = IXDR_GET_LONG(buf);
			objp->mime_flag = IXDR_GET_LONG(buf);
			objp->max_age = IXDR_GET_LONG(buf);
			objp->got_range = IXDR_GET_LONG(buf);
			objp->maxresponse = IXDR_GET_LONG(buf);
			objp->responselen = IXDR_GET_LONG(buf);
			objp->first_byte_index = IXDR_GET_LONG(buf);
			objp->last_byte_index = IXDR_GET_LONG(buf);
			objp->bytes_to_send = IXDR_GET_LONG(buf);
			objp->range_if = IXDR_GET_LONG(buf);
		}
	 return TRUE;
	}

	 if (!xdr_string (xdrs, &objp->dirname, 100))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->authorization, 100))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->hostdir, 100))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->remoteuser, 100))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->encodedurl, 100))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->useragent, 100))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->charset, 100))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->protocol, 100))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->p3p, 100))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->response, 500))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->global_passwd))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->vhost))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->maxremoteuser))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->method))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->should_linger))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->status))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->mime_flag))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->max_age))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->got_range))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->maxresponse))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->responselen))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->first_byte_index))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->last_byte_index))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->bytes_to_send))
		 return FALSE;
	 if (!xdr_long (xdrs, &objp->range_if))
		 return FALSE;
	return TRUE;
}
