#ifndef __cipher_h
#define __cipher_h

#define CIPHER_NONE	0
#define CIPHER_RC4	1
#define CIPHER_BLOWFISH	2
#ifdef CONFIG_CIPHER_IDEA
#define CIPHER_IDEA	3
#endif

#define USE_OPENSSL	1

#if USE_OPENSSL
#include "cipher_openssl.h"
#else
#include "cipher/rc4.h"
#include "cipher/blowfish.h"
#ifdef CONFIG_CIPHER_IDEA
#include "cipher/idea.h"
#endif
#endif

union cipher_state {
	rc4_state rc4;
	blowfish_state blowfish;
#ifdef CONFIG_CIPHER_IDEA
	idea_state idea;
#endif
};

struct htlc_conn;
struct qbuf;

extern void cipher_encode (struct htlc_conn *htlc, unsigned int start, unsigned int len);
extern u_int32_t cipher_decode (struct htlc_conn *htlc, struct qbuf *out, struct qbuf *in, u_int32_t max, u_int32_t *nusedp);
extern void cipher_encode_init (struct htlc_conn *htlc);
extern void cipher_decode_init (struct htlc_conn *htlc);
extern void cipher_change_decode_key (struct htlc_conn *htlc, u_int32_t type);

#endif /* __cipher_h */
