/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "alertas.h"

bool_t
xdr_nodo_paciente (XDR *xdrs, nodo_paciente *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->nombres, MAXNOM,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->edad))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->numHabitacion))
		 return FALSE;
	 if (!xdr_nodo_indicadores (xdrs, &objp->indicadores))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_nodo_indicadores (XDR *xdrs, nodo_indicadores *objp)
{
	register int32_t *buf;

	 if (!xdr_float (xdrs, &objp->frecuenciaCardiaca))
		 return FALSE;
	return TRUE;
}
