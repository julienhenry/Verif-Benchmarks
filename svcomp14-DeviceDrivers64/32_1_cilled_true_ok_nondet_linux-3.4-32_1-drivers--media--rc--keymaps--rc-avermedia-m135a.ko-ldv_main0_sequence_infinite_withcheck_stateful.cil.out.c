/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 46 "include/asm-generic/int-ll64.h"
typedef unsigned short u16;
#line 49 "include/asm-generic/int-ll64.h"
typedef unsigned int u32;
#line 52 "include/asm-generic/int-ll64.h"
typedef unsigned long long u64;
#line 219 "include/linux/types.h"
struct __anonstruct_atomic_t_7 {
   int counter ;
};
#line 219 "include/linux/types.h"
typedef struct __anonstruct_atomic_t_7 atomic_t;
#line 229 "include/linux/types.h"
struct list_head {
   struct list_head *next ;
   struct list_head *prev ;
};
#line 20 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/thread_info.h"
struct task_struct;
#line 20
struct task_struct;
#line 7 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/processor.h"
struct task_struct;
#line 52 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/paravirt_types.h"
struct task_struct;
#line 329
struct arch_spinlock;
#line 329
struct arch_spinlock;
#line 139 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/ptrace.h"
struct task_struct;
#line 8 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/current.h"
struct task_struct;
#line 14 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
typedef u16 __ticket_t;
#line 15 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
typedef u32 __ticketpair_t;
#line 20 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
struct __raw_tickets {
   __ticket_t head ;
   __ticket_t tail ;
};
#line 20 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
union __anonunion____missing_field_name_36 {
   __ticketpair_t head_tail ;
   struct __raw_tickets tickets ;
};
#line 20 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
struct arch_spinlock {
   union __anonunion____missing_field_name_36 __annonCompField17 ;
};
#line 20 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
typedef struct arch_spinlock arch_spinlock_t;
#line 12 "include/linux/lockdep.h"
struct task_struct;
#line 20 "include/linux/spinlock_types.h"
struct raw_spinlock {
   arch_spinlock_t raw_lock ;
   unsigned int magic ;
   unsigned int owner_cpu ;
   void *owner ;
};
#line 64 "include/linux/spinlock_types.h"
union __anonunion____missing_field_name_39 {
   struct raw_spinlock rlock ;
};
#line 64 "include/linux/spinlock_types.h"
struct spinlock {
   union __anonunion____missing_field_name_39 __annonCompField19 ;
};
#line 64 "include/linux/spinlock_types.h"
typedef struct spinlock spinlock_t;
#line 55 "include/linux/wait.h"
struct task_struct;
#line 48 "include/linux/mutex.h"
struct mutex {
   atomic_t count ;
   spinlock_t wait_lock ;
   struct list_head wait_list ;
   struct task_struct *owner ;
   char const   *name ;
   void *magic ;
};
#line 18 "include/linux/capability.h"
struct task_struct;
#line 31 "include/media/rc-map.h"
struct rc_map_table {
   u32 scancode ;
   u32 keycode ;
};
#line 36 "include/media/rc-map.h"
struct rc_map {
   struct rc_map_table *scan ;
   unsigned int size ;
   unsigned int len ;
   unsigned int alloc ;
   u64 rc_type ;
   char const   *name ;
   spinlock_t lock ;
};
#line 46 "include/media/rc-map.h"
struct rc_map_list {
   struct list_head list ;
   struct rc_map map ;
};
#line 270 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/elf.h"
struct task_struct;
#line 126 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-avermedia-m135a.c.common.c"
struct __anonstruct_220 {
   int  : 0 ;
};
#line 1 "<compiler builtins>"
long ldv__builtin_expect(long val , long res ) ;
#line 152 "include/linux/mutex.h"
void mutex_lock(struct mutex *lock ) ;
#line 153
int __attribute__((__warn_unused_result__))  mutex_lock_interruptible(struct mutex *lock ) ;
#line 154
int __attribute__((__warn_unused_result__))  mutex_lock_killable(struct mutex *lock ) ;
#line 168
int mutex_trylock(struct mutex *lock ) ;
#line 169
void mutex_unlock(struct mutex *lock ) ;
#line 170
int atomic_dec_and_mutex_lock(atomic_t *cnt , struct mutex *lock ) ;
#line 53 "include/media/rc-map.h"
extern int rc_map_register(struct rc_map_list *map ) ;
#line 54
extern void rc_map_unregister(struct rc_map_list *map ) ;
#line 67 "include/linux/module.h"
int init_module(void) ;
#line 68
void cleanup_module(void) ;
#line 27 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-avermedia-m135a.c.common.c"
static struct rc_map_table avermedia_m135a[79]  = 
#line 27 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-avermedia-m135a.c.common.c"
  {      {(u32 )512, (u32 )356}, 
        {(u32 )558, (u32 )52}, 
        {(u32 )513, (u32 )373}, 
        {(u32 )517, (u32 )2}, 
        {(u32 )518, (u32 )3}, 
        {(u32 )519, (u32 )4}, 
        {(u32 )521, (u32 )5}, 
        {(u32 )522, (u32 )6}, 
        {(u32 )523, (u32 )7}, 
        {(u32 )525, (u32 )8}, 
        {(u32 )526, (u32 )9}, 
        {(u32 )527, (u32 )10}, 
        {(u32 )529, (u32 )11}, 
        {(u32 )531, (u32 )106}, 
        {(u32 )530, (u32 )105}, 
        {(u32 )535, (u32 )142}, 
        {(u32 )528, (u32 )410}, 
        {(u32 )771, (u32 )402}, 
        {(u32 )770, (u32 )403}, 
        {(u32 )543, (u32 )115}, 
        {(u32 )542, (u32 )114}, 
        {(u32 )524, (u32 )28}, 
        {(u32 )532, (u32 )113}, 
        {(u32 )520, (u32 )392}, 
        {(u32 )515, (u32 )388}, 
        {(u32 )516, (u32 )365}, 
        {(u32 )555, (u32 )378}, 
        {(u32 )541, (u32 )398}, 
        {(u32 )540, (u32 )400}, 
        {(u32 )769, (u32 )399}, 
        {(u32 )768, (u32 )401}, 
        {(u32 )538, (u32 )164}, 
        {(u32 )537, (u32 )167}, 
        {(u32 )536, (u32 )207}, 
        {(u32 )539, (u32 )128}, 
        {(u32 )1025, (u32 )356}, 
        {(u32 )1030, (u32 )113}, 
        {(u32 )1032, (u32 )373}, 
        {(u32 )1033, (u32 )2}, 
        {(u32 )1034, (u32 )3}, 
        {(u32 )1035, (u32 )4}, 
        {(u32 )1036, (u32 )5}, 
        {(u32 )1037, (u32 )6}, 
        {(u32 )1038, (u32 )7}, 
        {(u32 )1039, (u32 )8}, 
        {(u32 )1040, (u32 )9}, 
        {(u32 )1041, (u32 )10}, 
        {(u32 )1100, (u32 )52}, 
        {(u32 )1042, (u32 )11}, 
        {(u32 )1031, (u32 )173}, 
        {(u32 )1043, (u32 )392}, 
        {(u32 )1088, (u32 )375}, 
        {(u32 )1089, (u32 )102}, 
        {(u32 )1090, (u32 )158}, 
        {(u32 )1095, (u32 )103}, 
        {(u32 )1096, (u32 )108}, 
        {(u32 )1097, (u32 )105}, 
        {(u32 )1098, (u32 )106}, 
        {(u32 )1099, (u32 )352}, 
        {(u32 )1028, (u32 )115}, 
        {(u32 )1029, (u32 )114}, 
        {(u32 )1026, (u32 )402}, 
        {(u32 )1027, (u32 )403}, 
        {(u32 )1091, (u32 )398}, 
        {(u32 )1092, (u32 )399}, 
        {(u32 )1093, (u32 )400}, 
        {(u32 )1094, (u32 )401}, 
        {(u32 )1044, (u32 )388}, 
        {(u32 )1045, (u32 )365}, 
        {(u32 )1050, (u32 )378}, 
        {(u32 )1051, (u32 )212}, 
        {(u32 )1047, (u32 )167}, 
        {(u32 )1046, (u32 )164}, 
        {(u32 )1048, (u32 )128}, 
        {(u32 )1049, (u32 )119}, 
        {(u32 )1055, (u32 )412}, 
        {(u32 )1052, (u32 )168}, 
        {(u32 )1053, (u32 )159}, 
        {(u32 )1054, (u32 )407}};
#line 126 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-avermedia-m135a.c.common.c"
static struct rc_map_list avermedia_m135a_map  =    {{(struct list_head *)0, (struct list_head *)0}, {avermedia_m135a, (unsigned int )(sizeof(avermedia_m135a) / sizeof(avermedia_m135a[0]) + sizeof(struct __anonstruct_220 )),
                                                     0U, 0U, (u64 )(1 << 1), "rc-avermedia-m135a",
                                                     {{{{{0U}}, 0U, 0U, (void *)0}}}}};
#line 135
static int init_rc_map_avermedia_m135a(void)  __attribute__((__section__(".init.text"),
__no_instrument_function__)) ;
#line 135 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-avermedia-m135a.c.common.c"
static int init_rc_map_avermedia_m135a(void) 
{ int tmp ;

  {
  {
#line 137
  tmp = rc_map_register(& avermedia_m135a_map);
  }
#line 137
  return (tmp);
}
}
#line 140
static void exit_rc_map_avermedia_m135a(void)  __attribute__((__section__(".exit.text"),
__no_instrument_function__)) ;
#line 140 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-avermedia-m135a.c.common.c"
static void exit_rc_map_avermedia_m135a(void) 
{ 

  {
  {
#line 142
  rc_map_unregister(& avermedia_m135a_map);
  }
#line 143
  return;
}
}
#line 145 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-avermedia-m135a.c.common.c"
int init_module(void) 
{ int tmp ;

  {
  {
#line 145
  tmp = init_rc_map_avermedia_m135a();
  }
#line 145
  return (tmp);
}
}
#line 146 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-avermedia-m135a.c.common.c"
void cleanup_module(void) 
{ 

  {
  {
#line 146
  exit_rc_map_avermedia_m135a();
  }
#line 146
  return;
}
}
#line 148 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-avermedia-m135a.c.common.c"
static char const   __mod_license148[12]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 148
  {      (char const   )'l',      (char const   )'i',      (char const   )'c',      (char const   )'e', 
        (char const   )'n',      (char const   )'s',      (char const   )'e',      (char const   )'=', 
        (char const   )'G',      (char const   )'P',      (char const   )'L',      (char const   )'\000'};
#line 149 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-avermedia-m135a.c.common.c"
static char const   __mod_author149[50]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 149
  {      (char const   )'a',      (char const   )'u',      (char const   )'t',      (char const   )'h', 
        (char const   )'o',      (char const   )'r',      (char const   )'=',      (char const   )'M', 
        (char const   )'a',      (char const   )'u',      (char const   )'r',      (char const   )'o', 
        (char const   )' ',      (char const   )'C',      (char const   )'a',      (char const   )'r', 
        (char const   )'v',      (char const   )'a',      (char const   )'l',      (char const   )'h', 
        (char const   )'o',      (char const   )' ',      (char const   )'C',      (char const   )'h', 
        (char const   )'e',      (char const   )'h',      (char const   )'a',      (char const   )'b', 
        (char const   )' ',      (char const   )'<',      (char const   )'m',      (char const   )'c', 
        (char const   )'h',      (char const   )'e',      (char const   )'h',      (char const   )'a', 
        (char const   )'b',      (char const   )'@',      (char const   )'r',      (char const   )'e', 
        (char const   )'d',      (char const   )'h',      (char const   )'a',      (char const   )'t', 
        (char const   )'.',      (char const   )'c',      (char const   )'o',      (char const   )'m', 
        (char const   )'>',      (char const   )'\000'};
#line 167
void ldv_check_final_state(void) ;
#line 173
extern void ldv_initialize(void) ;
#line 176
extern int __VERIFIER_nondet_int(void) ;
#line 179 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-avermedia-m135a.c.common.c"
int LDV_IN_INTERRUPT  ;
#line 182 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-avermedia-m135a.c.common.c"
void main(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
#line 194
  LDV_IN_INTERRUPT = 1;
#line 203
  ldv_initialize();
#line 209
  tmp = init_rc_map_avermedia_m135a();
  }
#line 209
  if (tmp) {
#line 210
    goto ldv_final;
  } else {

  }
  {
#line 212
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 212
    tmp___1 = __VERIFIER_nondet_int();
    }
#line 212
    if (tmp___1) {

    } else {
#line 212
      goto while_break;
    }
    {
#line 215
    tmp___0 = __VERIFIER_nondet_int();
    }
    {
#line 217
    goto switch_default;
#line 215
    if (0) {
      switch_default: /* CIL Label */ 
#line 217
      goto switch_break;
    } else {
      switch_break: /* CIL Label */ ;
    }
    }
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 229
  exit_rc_map_avermedia_m135a();
  }
  ldv_final: 
  {
#line 232
  ldv_check_final_state();
  }
#line 235
  return;
}
}
#line 5 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/engine-blast-assert.h"
void ldv_blast_assert(void) 
{ 

  {
  ERROR: 
#line 6
  goto ERROR;
}
}
#line 6 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/engine-blast.h"
extern int __VERIFIER_nondet_int(void) ;
#line 19 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
int ldv_mutex  =    1;
#line 22 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
int __attribute__((__warn_unused_result__))  mutex_lock_interruptible(struct mutex *lock ) 
{ int nondetermined ;

  {
#line 29
  if (ldv_mutex == 1) {

  } else {
    {
#line 29
    ldv_blast_assert();
    }
  }
  {
#line 32
  nondetermined = __VERIFIER_nondet_int();
  }
#line 35
  if (nondetermined) {
#line 38
    ldv_mutex = 2;
#line 40
    return (0);
  } else {
#line 45
    return (-4);
  }
}
}
#line 50 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
int __attribute__((__warn_unused_result__))  mutex_lock_killable(struct mutex *lock ) 
{ int nondetermined ;

  {
#line 57
  if (ldv_mutex == 1) {

  } else {
    {
#line 57
    ldv_blast_assert();
    }
  }
  {
#line 60
  nondetermined = __VERIFIER_nondet_int();
  }
#line 63
  if (nondetermined) {
#line 66
    ldv_mutex = 2;
#line 68
    return (0);
  } else {
#line 73
    return (-4);
  }
}
}
#line 78 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
int atomic_dec_and_mutex_lock(atomic_t *cnt , struct mutex *lock ) 
{ int atomic_value_after_dec ;

  {
#line 83
  if (ldv_mutex == 1) {

  } else {
    {
#line 83
    ldv_blast_assert();
    }
  }
  {
#line 86
  atomic_value_after_dec = __VERIFIER_nondet_int();
  }
#line 89
  if (atomic_value_after_dec == 0) {
#line 92
    ldv_mutex = 2;
#line 94
    return (1);
  } else {

  }
#line 98
  return (0);
}
}
#line 103 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
void mutex_lock(struct mutex *lock ) 
{ 

  {
#line 108
  if (ldv_mutex == 1) {

  } else {
    {
#line 108
    ldv_blast_assert();
    }
  }
#line 110
  ldv_mutex = 2;
#line 111
  return;
}
}
#line 114 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
int mutex_trylock(struct mutex *lock ) 
{ int nondetermined ;

  {
#line 121
  if (ldv_mutex == 1) {

  } else {
    {
#line 121
    ldv_blast_assert();
    }
  }
  {
#line 124
  nondetermined = __VERIFIER_nondet_int();
  }
#line 127
  if (nondetermined) {
#line 130
    ldv_mutex = 2;
#line 132
    return (1);
  } else {
#line 137
    return (0);
  }
}
}
#line 142 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
void mutex_unlock(struct mutex *lock ) 
{ 

  {
#line 147
  if (ldv_mutex == 2) {

  } else {
    {
#line 147
    ldv_blast_assert();
    }
  }
#line 149
  ldv_mutex = 1;
#line 150
  return;
}
}
#line 153 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
void ldv_check_final_state(void) 
{ 

  {
#line 156
  if (ldv_mutex == 1) {

  } else {
    {
#line 156
    ldv_blast_assert();
    }
  }
#line 157
  return;
}
}
#line 244 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12869/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-avermedia-m135a.c.common.c"
long ldv__builtin_expect(long val , long res ) 
{ 

  {
#line 245
  return (val);
}
}
