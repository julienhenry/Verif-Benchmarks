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
#line 64 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-total-media-in-hand.c.common.c"
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
#line 26 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-total-media-in-hand.c.common.c"
static struct rc_map_table total_media_in_hand[35]  = 
#line 26 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-total-media-in-hand.c.common.c"
  {      {(u32 )179456, (u32 )2}, 
        {(u32 )179457, (u32 )3}, 
        {(u32 )179458, (u32 )4}, 
        {(u32 )179459, (u32 )5}, 
        {(u32 )179460, (u32 )6}, 
        {(u32 )179461, (u32 )7}, 
        {(u32 )179462, (u32 )8}, 
        {(u32 )179463, (u32 )9}, 
        {(u32 )179464, (u32 )10}, 
        {(u32 )179465, (u32 )11}, 
        {(u32 )179466, (u32 )113}, 
        {(u32 )179467, (u32 )154}, 
        {(u32 )179468, (u32 )393}, 
        {(u32 )179470, (u32 )114}, 
        {(u32 )179471, (u32 )359}, 
        {(u32 )179472, (u32 )106}, 
        {(u32 )179473, (u32 )105}, 
        {(u32 )179474, (u32 )103}, 
        {(u32 )179475, (u32 )108}, 
        {(u32 )179476, (u32 )356}, 
        {(u32 )179477, (u32 )352}, 
        {(u32 )179478, (u32 )128}, 
        {(u32 )179479, (u32 )212}, 
        {(u32 )179480, (u32 )402}, 
        {(u32 )179481, (u32 )167}, 
        {(u32 )179482, (u32 )403}, 
        {(u32 )179484, (u32 )1}, 
        {(u32 )179486, (u32 )207}, 
        {(u32 )179487, (u32 )115}, 
        {(u32 )179520, (u32 )119}, 
        {(u32 )179521, (u32 )208}, 
        {(u32 )179522, (u32 )168}, 
        {(u32 )179523, (u32 )372}, 
        {(u32 )179524, (u32 )410}, 
        {(u32 )179525, (u32 )358}};
#line 64 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-total-media-in-hand.c.common.c"
static struct rc_map_list total_media_in_hand_map  =    {{(struct list_head *)0, (struct list_head *)0}, {total_media_in_hand, (unsigned int )(sizeof(total_media_in_hand) / sizeof(total_media_in_hand[0]) + sizeof(struct __anonstruct_220 )),
                                                     0U, 0U, (u64 )(1 << 1), "rc-total-media-in-hand",
                                                     {{{{{0U}}, 0U, 0U, (void *)0}}}}};
#line 73
static int init_rc_map_total_media_in_hand(void)  __attribute__((__section__(".init.text"),
__no_instrument_function__)) ;
#line 73 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-total-media-in-hand.c.common.c"
static int init_rc_map_total_media_in_hand(void) 
{ int tmp ;

  {
  {
#line 75
  tmp = rc_map_register(& total_media_in_hand_map);
  }
#line 75
  return (tmp);
}
}
#line 78
static void exit_rc_map_total_media_in_hand(void)  __attribute__((__section__(".exit.text"),
__no_instrument_function__)) ;
#line 78 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-total-media-in-hand.c.common.c"
static void exit_rc_map_total_media_in_hand(void) 
{ 

  {
  {
#line 80
  rc_map_unregister(& total_media_in_hand_map);
  }
#line 81
  return;
}
}
#line 83 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-total-media-in-hand.c.common.c"
int init_module(void) 
{ int tmp ;

  {
  {
#line 83
  tmp = init_rc_map_total_media_in_hand();
  }
#line 83
  return (tmp);
}
}
#line 84 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-total-media-in-hand.c.common.c"
void cleanup_module(void) 
{ 

  {
  {
#line 84
  exit_rc_map_total_media_in_hand();
  }
#line 84
  return;
}
}
#line 86 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-total-media-in-hand.c.common.c"
static char const   __mod_license86[12]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 86
  {      (char const   )'l',      (char const   )'i',      (char const   )'c',      (char const   )'e', 
        (char const   )'n',      (char const   )'s',      (char const   )'e',      (char const   )'=', 
        (char const   )'G',      (char const   )'P',      (char const   )'L',      (char const   )'\000'};
#line 87 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-total-media-in-hand.c.common.c"
static char const   __mod_author87[38]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 87
  {      (char const   )'a',      (char const   )'u',      (char const   )'t',      (char const   )'h', 
        (char const   )'o',      (char const   )'r',      (char const   )'=',      (char const   )'A', 
        (char const   )'n',      (char const   )'t',      (char const   )'t',      (char const   )'i', 
        (char const   )' ',      (char const   )'P',      (char const   )'a',      (char const   )'l', 
        (char const   )'o',      (char const   )'s',      (char const   )'a',      (char const   )'a', 
        (char const   )'r',      (char const   )'i',      (char const   )' ',      (char const   )'<', 
        (char const   )'c',      (char const   )'r',      (char const   )'o',      (char const   )'p', 
        (char const   )'e',      (char const   )'@',      (char const   )'i',      (char const   )'k', 
        (char const   )'i',      (char const   )'.',      (char const   )'f',      (char const   )'i', 
        (char const   )'>',      (char const   )'\000'};
#line 105
void ldv_check_final_state(void) ;
#line 111
extern void ldv_initialize(void) ;
#line 114
extern int __VERIFIER_nondet_int(void) ;
#line 117 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-total-media-in-hand.c.common.c"
int LDV_IN_INTERRUPT  ;
#line 120 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-total-media-in-hand.c.common.c"
void main(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
#line 132
  LDV_IN_INTERRUPT = 1;
#line 141
  ldv_initialize();
#line 147
  tmp = init_rc_map_total_media_in_hand();
  }
#line 147
  if (tmp) {
#line 148
    goto ldv_final;
  } else {

  }
  {
#line 150
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 150
    tmp___1 = __VERIFIER_nondet_int();
    }
#line 150
    if (tmp___1) {

    } else {
#line 150
      goto while_break;
    }
    {
#line 153
    tmp___0 = __VERIFIER_nondet_int();
    }
    {
#line 155
    goto switch_default;
#line 153
    if (0) {
      switch_default: /* CIL Label */ 
#line 155
      goto switch_break;
    } else {
      switch_break: /* CIL Label */ ;
    }
    }
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 167
  exit_rc_map_total_media_in_hand();
  }
  ldv_final: 
  {
#line 170
  ldv_check_final_state();
  }
#line 173
  return;
}
}
#line 5 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/engine-blast-assert.h"
void ldv_blast_assert(void) 
{ 

  {
  ERROR: 
#line 6
  goto ERROR;
}
}
#line 6 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/engine-blast.h"
extern int __VERIFIER_nondet_int(void) ;
#line 19 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
int ldv_mutex  =    1;
#line 22 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 50 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 78 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 103 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 114 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 142 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 153 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 182 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/12945/dscv_tempdir/dscv/ri/32_1/drivers/media/rc/keymaps/rc-total-media-in-hand.c.common.c"
long ldv__builtin_expect(long val , long res ) 
{ 

  {
#line 183
  return (val);
}
}
