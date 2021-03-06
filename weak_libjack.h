/* runtime/weak dynamic JACK linking
 *
 * (C) 2014 Robin Gareus <robin@gareus.org>
 *
 * The wrapped jack API itself is
 * (C) 2001 Paul Davis
 * (C) 2004 Jack O'Quin
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#pragma once

/* <jack/jack.h> */
#define jack_client_close                   WJACK_client_close
#define jack_get_client_name                WJACK_get_client_name
#define jack_get_sample_rate                WJACK_get_sample_rate
#define jack_get_buffer_size                WJACK_get_buffer_size
#define jack_frames_since_cycle_start       WJACK_frames_since_cycle_start
#define jack_frame_time                     WJACK_frame_time
#define jack_last_frame_time                WJACK_last_frame_time
#define jack_get_time                       WJACK_get_time
#define jack_cpu_load                       WJACK_cpu_load
#define jack_is_realtime                    WJACK_is_realtime

#define jack_client_name_size               WJACK_client_name_size

#define jack_set_freewheel                  WJACK_set_freewheel
#define jack_set_buffer_size                WJACK_set_buffer_size

#define jack_on_shutdown                    WJACK_on_shutdown
#define jack_on_info_shutdown               WJACK_on_info_shutdown
#define jack_set_process_callback           WJACK_set_process_callback
#define jack_set_freewheel_callback         WJACK_set_freewheel_callback
#define jack_set_buffer_size_callback       WJACK_set_buffer_size_callback
#define jack_set_sample_rate_callback       WJACK_set_sample_rate_callback
#define jack_set_port_registration_callback WJACK_set_port_registration_callback
#define jack_set_port_connect_callback      WJACK_set_port_connect_callback
#define jack_set_graph_order_callback       WJACK_set_graph_order_callback
#define jack_set_xrun_callback              WJACK_set_xrun_callback
#define jack_set_latency_callback           WJACK_set_latency_callback
#define jack_set_error_function             WJACK_set_error_function
#define jack_set_info_function             WJACK_set_info_function

#define jack_activate                       WJACK_activate
#define jack_deactivate                     WJACK_deactivate

#define jack_recompute_total_latencies      WJACK_recompute_total_latencies
#define jack_port_get_total_latency         WJACK_port_get_total_latency
#define jack_port_get_latency_range         WJACK_port_get_latency_range
#define jack_port_set_latency_range         WJACK_port_set_latency_range
#define jack_port_get_buffer                WJACK_port_get_buffer
#define jack_port_request_monitor           WJACK_port_request_monitor
#define jack_port_ensure_monitor            WJACK_port_ensure_monitor
#define jack_port_monitoring_input          WJACK_port_monitoring_input

#define jack_port_name                      WJACK_port_name
#define jack_port_short_name                WJACK_port_short_name
#define jack_port_flags                     WJACK_port_flags
#define jack_port_is_mine                   WJACK_port_is_mine
#define jack_port_connected                 WJACK_port_connected
#define jack_get_ports                      WJACK_get_ports
#define jack_port_name_size                 WJACK_port_name_size
#define jack_port_type_size                 WJACK_port_type_size
#define jack_port_type_get_buffer_size      WJACK_port_type_get_buffer_size
#define jack_port_by_name                   WJACK_port_by_name
#define jack_port_by_id                     WJACK_port_by_id
#define jack_port_set_name                  WJACK_port_set_name
#define jack_port_get_aliases               WJACK_port_get_aliases
#define jack_port_rename                    WJACK_port_rename
#define jack_port_disconnect                WJACK_port_disconnect
#define jack_port_register                  WJACK_port_register
#define jack_port_unregister                WJACK_port_unregister
#define jack_port_type                      WJACK_port_type
#define jack_port_get_connections           WJACK_port_get_connections
#define jack_port_get_all_connections       WJACK_port_get_all_connections
#define jack_connect                        WJACK_connect
#define jack_disconnect                     WJACK_disconnect
#define jack_free                           WJACK_free

#define jack_cycle_wait                     WJACK_cycle_wait
#define jack_cycle_signal                   WJACK_cycle_signal
#define jack_set_process_thread             WJACK_set_process_thread
#define jack_set_thread_init_callback       WJACK_set_thread_init_callback

/* <jack/transport.h> */
#define jack_get_current_transport_frame    WJACK_get_current_transport_frame
#define jack_transport_locate               WJACK_transport_locate
#define jack_transport_start                WJACK_transport_start
#define jack_transport_stop                 WJACK_transport_stop
#define jack_transport_query                WJACK_transport_query
#define jack_set_sync_callback              WJACK_set_sync_callback
#define jack_set_timebase_callback          WJACK_set_timebase_callback
#define jack_release_timebase               WJACK_release_timebase

/* <jack/midiport.h> */
#define jack_midi_event_reserve             WJACK_midi_event_reserve
#define jack_midi_get_event_count           WJACK_midi_get_event_count
#define jack_midi_event_get                 WJACK_midi_event_get
#define jack_midi_event_write               WJACK_midi_event_write
#define jack_midi_clear_buffer              WJACK_midi_clear_buffer

/* <jack/session.h> */
#define jack_set_session_callback           WJACK_set_session_callback
#define jack_session_reply                  WJACK_session_reply
#define jack_session_event_free             WJACK_session_event_free

/* <jack/ringbuffer.h> */
#define jack_ringbuffer_create              WJACK_ringbuffer_create
#define jack_ringbuffer_free                WJACK_ringbuffer_free
#define jack_ringbuffer_reset               WJACK_ringbuffer_reset
#define jack_ringbuffer_read_advance        WJACK_ringbuffer_read_advance
#define jack_ringbuffer_write_advance       WJACK_ringbuffer_write_advance
#define jack_ringbuffer_read_space          WJACK_ringbuffer_read_space
#define jack_ringbuffer_write_space         WJACK_ringbuffer_write_space
#define jack_ringbuffer_read                WJACK_ringbuffer_read
#define jack_ringbuffer_write               WJACK_ringbuffer_write
#define jack_ringbuffer_mlock               WJACK_ringbuffer_mlock
#define jack_ringbuffer_get_read_vector     WJACK_ringbuffer_get_read_vector
#define jack_ringbuffer_get_write_vector    WJACK_ringbuffer_get_write_vector
#define jack_ringbuffer_peek                WJACK_ringbuffer_peek

/* <jack/thread.h> */
#define jack_client_real_time_priority      WJACK_client_real_time_priority
#define jack_client_max_real_time_priority  WJACK_client_max_real_time_priority
#define jack_acquire_real_time_scheduling   WJACK_acquire_real_time_scheduling
#define jack_client_create_thread           WJACK_client_create_thread
#define jack_drop_real_time_scheduling      WJACK_drop_real_time_scheduling
#define jack_client_stop_thread             WJACK_client_stop_thread
#define jack_client_kill_thread             WJACK_client_kill_thread
#define jack_set_thread_creator             WJACK_set_thread_creator

#define jack_client_open                    WJACK_client_client_openXXX

#if __has_include(<jack/metadata.h>)
/* <jack/metadata.h> */
#define jack_get_uuid_for_client_name       WJACK_get_uuid_for_client_name
#define jack_get_client_name_by_uuid        WJACK_get_client_name_by_uuid
#define jack_port_uuid                      WJACK_port_uuid

#define jack_set_property                   WJACK_set_property
#define jack_get_property                   WJACK_get_property
#define jack_free_description               WJACK_free_description
#define jack_get_properties                 WJACK_get_properties
#define jack_get_all_properties             WJACK_get_all_properties
#define jack_remove_property                WJACK_remove_property
#define jack_remove_properties              WJACK_remove_properties
#define jack_remove_all_properties          WJACK_remove_all_properties
#define jack_set_property_change_callback   WJACK_set_property_change_callback
#endif

/* <jack/statistics.h> */
#define jack_get_max_delayed_usecs WJACK_get_max_delayed_usecs
#define jack_get_xrun_delayed_usecs WJACK_get_xrun_delayed_usecs
#define jack_reset_max_delayed_usecs WJACK_reset_max_delayed_usecs

#include <jack/jack.h>
#include <jack/transport.h>
#include <jack/ringbuffer.h>
#include <jack/midiport.h>
#include <jack/session.h>
#include <jack/thread.h>
#include <jack/statistics.h>

#if __has_include(<jack/metadata.h>)
#include <jack/metadata.h>
#endif

#undef jack_client_open

/* var-args hack */
void (* WJACK_get_client_open (void)) (void);
jack_client_t * WJACK_no_client_open (const char *client_name, jack_options_t options, jack_status_t *status, ...);

#define jack_client_open(...) \
( \
  (WJACK_get_client_open() != NULL) \
  ?  ((jack_client_t* (*)(const char *, jack_options_t, jack_status_t *, ...))(WJACK_get_client_open()))(__VA_ARGS__) \
  : WJACK_no_client_open(__VA_ARGS__) \
)

#include <cstdio>
#include <cstring>
#include <cassert>
#include <iostream>
#include <array>

#ifdef _WIN32
#include <Windows.h>
#else
#include <dlfcn.h>
#endif

typedef void (* func_t) (void);
#if defined(_MSC_VER) && !defined(__INTEL_COMPILER)
typedef void * pvoid_t;
#define MAPSYM(SYM, FAIL) _ ## SYM = (func_t)lib_symbol(_lib, "jack_" # SYM); \
  if (!_ ## SYM) err |= FAIL;
#elif defined(NDEBUG)
typedef void * __attribute__ ((__may_alias__)) pvoid_t;
#define MAPSYM(SYM, FAIL) *(pvoid_t *)(&_ ## SYM) = WeakJack::lib_symbol(_lib, "jack_" # SYM); \
  if (!_ ## SYM) err |= FAIL;
#else
typedef void * __attribute__ ((__may_alias__)) pvoid_t;
#define MAPSYM(SYM, FAIL) *(pvoid_t *)(&_ ## SYM) = WeakJack::lib_symbol(_lib, "jack_" # SYM); \
  if (!_ ## SYM) { \
    if (FAIL) { \
      fprintf(stderr, "*** WEAK-JACK: required symbol 'jack_%s' was not found\n", "" # SYM); \
    } \
    err |= FAIL; \
  }
#endif

/* function pointers to the real jack API */
struct WeakJack
{
  func_t _client_open{}; // special case due to varargs
  int _status = -1;
  void* _lib{};

  /** check if libjack is available
   *
   * return 0 if libjack is dynamically linked of was
   * successfully dl-opened. Otherwise:
   *
   * -1: library was not initialized
   * -2: libjack was not found
   *  > 0 bitwise flags:
   *      1: a required function was not found in libjack
   *      2: jack_client_open was not found in libjack
   */
  int available() const noexcept
  {
    return _status;
  }

  static constexpr auto lib_paths()
  {
      const constexpr
    #if defined(__APPLE__)
      std::array<const char*, 2> p{"libjack.dylib", "/usr/local/lib/libjack.dylib"}

    #elif defined(_WIN32)
    # if defined(_WIN64)
      std::array<const char*, 1> p{"libjack64.dll"}
    # else
      std::array<const char*, 1> p{"libjack.dll"}
    # endif

    #else
      std::array<const char*, 1> p{"libjack.so.0"}
    #endif
    ;

    return p;
  }

  WeakJack()
  {
      int err = 0;
      debug("*** WEAK-JACK: initializing\n");
      for(auto path : lib_paths())
      {
        if((_lib = lib_open(path)))
          break;
      }

      if (!_lib)
      {
        debug("*** WEAK-JACK: libjack was not found\n");
        _status = -2;
        return;
      }

      /* found library, now lookup functions */

    MAPSYM(client_open, 2)

    #define JCFUN(ERR, RTYPE, NAME, RVAL)             MAPSYM(NAME, ERR)
    #define JPFUN(ERR, RTYPE, NAME, DEF, ARGS, RVAL)  MAPSYM(NAME, ERR)
    #define JXFUN(ERR, RTYPE, NAME, DEF, ARGS, CODE)  MAPSYM(NAME, ERR)
    #define JVFUN(ERR, NAME, DEF, ARGS, CODE)         MAPSYM(NAME, ERR)

    #include "weak_libjack.def"

    #undef JCFUN
    #undef JPFUN
    #undef JXFUN
    #undef JVFUN

#undef MAPSYM

      /* if a required symbol is not found, disable JACK completly */
      if (err)
        _client_open = nullptr;

      _status = err;
      if(err)
        debug("*** WEAK-JACK: jack is not available");
      else
        debug("*** WEAK-JACK: OK.");
  }

  ~WeakJack()
  {
    if(_lib)
      lib_close(_lib);
  }

  static void debug(const char* str)
  {
#if !defined(NDEBUG)
    std::cerr << str << std::endl;
#endif
  }

  static const WeakJack& instance()
  {
    static const WeakJack j{};
    return j;
  }

  static void* lib_open(const char* const so)
  {
  #ifdef _WIN32
    return (void*) LoadLibraryA(so);
  #else
    return dlopen(so, RTLD_NOW|RTLD_LOCAL);
  #endif
  }

  static void lib_close(void* const lib)
  {
  #ifdef _WIN32
    FreeLibrary((HMODULE)lib);
  #else
    dlclose(lib);
  #endif
  }

  static void* lib_symbol(void* const lib, const char* const sym)
  {
  #ifdef _WIN32
    return (void*) GetProcAddress((HMODULE)lib, sym);
  #else
    return dlsym(lib, sym);
  #endif
  }

#define JCFUN(ERR, RTYPE, NAME, RVAL)              func_t _ ## NAME ;
#define JPFUN(ERR, RTYPE, NAME, DEF, ARGS, RVAL)   func_t _ ## NAME ;
#define JXFUN(ERR, RTYPE, NAME, DEF, ARGS, CODE)   func_t _ ## NAME ;
#define JVFUN(ERR, NAME, DEF, ARGS, CODE)          func_t _ ## NAME ;

#include "weak_libjack.def"

#undef JCFUN
#undef JPFUN
#undef JXFUN
#undef JVFUN
};


/*******************************************************************************
 * helper macros
 */

#ifndef NDEBUG
# define WJACK_WARNING(NAME) \
  fprintf(stderr, "*** WEAK-JACK: function 'jack_%s' ignored\n", "" # NAME);
#else
# define WJACK_WARNING(NAME) ;
#endif

/******************************************************************************
 * JACK API wrapper functions.
 *
 * if a function pointer is set in the static struct WeakJack _j,
 * the function is called directly.
 * Otherwise a dummy NOOP implementation is provided.
 * The latter is mainly for compile-time warnings.
 *
 * If libjack is not found, jack_client_open() will fail.
 * In that case the application should not call any other libjack
 * functions. Hence a real implementation is not needed.
 * (jack ringbuffer may be an exception for some apps)
 */

/* dedicated support for jack_client_open(,..) variable arg function macro */
inline func_t WJACK_get_client_open() {
  return WeakJack::instance()._client_open;
}

/* callback to set status */
inline jack_client_t * WJACK_no_client_open (const char *client_name, jack_options_t options, jack_status_t *status, ...) {
  WJACK_WARNING(client_open);
  if (status) { *status = JackFailure; }
  return nullptr;
}

/*******************************************************************************
 * Macros to wrap jack API
 */

/* abstraction for jack_client functions
 *  rtype jack_function_name (jack_client_t *client) { return rval; }
 */
#define JCFUN(ERR, RTYPE, NAME, RVAL) \
  inline RTYPE WJACK_ ## NAME (jack_client_t *client) { \
    auto& j = WeakJack::instance(); \
    if (j._ ## NAME) { \
      return ((RTYPE (*)(jack_client_t *client)) j._ ## NAME)(client); \
    } else { \
      WJACK_WARNING(NAME) \
      return RVAL; \
    } \
  }

/* abstraction for NOOP functions with return value
 *  rtype jack_function_name (ARGS) { return rval; }
 */
#define JPFUN(ERR, RTYPE, NAME, DEF, ARGS, RVAL) \
  inline RTYPE WJACK_ ## NAME DEF { \
    auto& j = WeakJack::instance(); \
    if (j._ ## NAME) { \
      return ((RTYPE (*)DEF) j._ ## NAME) ARGS; \
    } else { \
      WJACK_WARNING(NAME) \
      return RVAL; \
    } \
  }

/* abstraction for functions that need custom code.
 * e.g. functions with return-value-pointer args,
 * use CODE to initialize value
 *
 *  rtype jack_function_name (ARGS) { CODE }
 */
#define JXFUN(ERR, RTYPE, NAME, DEF, ARGS, CODE) \
  inline RTYPE WJACK_ ## NAME DEF { \
    auto& j = WeakJack::instance(); \
    if (j._ ## NAME) { \
      return ((RTYPE (*)DEF) j._ ## NAME) ARGS; \
    } else { \
      WJACK_WARNING(NAME) \
      CODE \
    } \
  }

/* abstraction for void functions with return-value-pointer args
 *  void jack_function_name (ARGS) { CODE }
 */
#define JVFUN(ERR, NAME, DEF, ARGS, CODE) \
  inline void WJACK_ ## NAME DEF { \
    auto& j = WeakJack::instance(); \
    if (j._ ## NAME) { \
      ((void (*)DEF) j._ ## NAME) ARGS; \
    } else { \
      WJACK_WARNING(NAME) \
      CODE \
    } \
  }

#include "weak_libjack.def"

#undef JCFUN
#undef JPFUN
#undef JXFUN
#undef JVFUN
