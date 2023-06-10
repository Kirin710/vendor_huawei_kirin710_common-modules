#ifndef _SWAT_PROTO_H_
#define _SWAT_PROTO_H_

/* This file is automatically generated with "make proto". DO NOT EDIT */


/* The following definitions come from web/cgi.c  */

void cgi_load_variables(void);
const char *cgi_variable(const char *name);
const char *cgi_variable_nonull(const char *name);
BOOL am_root(void);
char *cgi_user_name(void);
char *cgi_user_pass(void);
char *cgi_nonce(void);
void cgi_setup(const char *rootdir, int auth_required);
const char *cgi_baseurl(void);
const char *cgi_pathinfo(void);
char *cgi_remote_host(void);
char *cgi_remote_addr(void);
BOOL cgi_waspost(void);

/* The following definitions come from web/diagnose.c  */

BOOL winbindd_running(void);
BOOL nmbd_running(void);
BOOL smbd_running(void);

/* The following definitions come from web/neg_lang.c  */

int web_open(const char *fname, int flags, mode_t mode);
void web_set_lang(const char *lang_string);

/* The following definitions come from web/startstop.c  */

void start_smbd(void);
void start_nmbd(void);
void start_winbindd(void);
void stop_smbd(void);
void stop_nmbd(void);
void stop_winbindd(void);
void kill_pid(struct process_id pid);

/* The following definitions come from web/statuspage.c  */

void status_page(void);

/* The following definitions come from web/swat.c  */

void get_xsrf_token(const char *username, const char *pass,
		    const char *formname, time_t xsrf_time, char token_str[33]);
void print_xsrf_token(const char *username, const char *pass,
		      const char *formname);
BOOL verify_xsrf_token(const char *formname);

#endif /*  _SWAT_PROTO_H_  */
