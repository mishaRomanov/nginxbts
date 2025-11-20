#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>

/*
 * Define a struct for our module.
 */
typedef struct {
  ngx_str_t new_variable;
} ngx_config_modifier_module_t;
