/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 23 "include/asm-generic/int-ll64.h"
typedef unsigned short __u16;
#line 26 "include/asm-generic/int-ll64.h"
typedef unsigned int __u32;
#line 30 "include/asm-generic/int-ll64.h"
typedef unsigned long long __u64;
#line 45 "include/asm-generic/int-ll64.h"
typedef short s16;
#line 46 "include/asm-generic/int-ll64.h"
typedef unsigned short u16;
#line 49 "include/asm-generic/int-ll64.h"
typedef unsigned int u32;
#line 14 "include/asm-generic/posix_types.h"
typedef long __kernel_long_t;
#line 15 "include/asm-generic/posix_types.h"
typedef unsigned long __kernel_ulong_t;
#line 75 "include/asm-generic/posix_types.h"
typedef __kernel_ulong_t __kernel_size_t;
#line 76 "include/asm-generic/posix_types.h"
typedef __kernel_long_t __kernel_ssize_t;
#line 27 "include/linux/types.h"
typedef unsigned short umode_t;
#line 63 "include/linux/types.h"
typedef __kernel_size_t size_t;
#line 68 "include/linux/types.h"
typedef __kernel_ssize_t ssize_t;
#line 219 "include/linux/types.h"
struct __anonstruct_atomic_t_7 {
   int counter ;
};
#line 219 "include/linux/types.h"
typedef struct __anonstruct_atomic_t_7 atomic_t;
#line 224 "include/linux/types.h"
struct __anonstruct_atomic64_t_8 {
   long counter ;
};
#line 224 "include/linux/types.h"
typedef struct __anonstruct_atomic64_t_8 atomic64_t;
#line 229 "include/linux/types.h"
struct list_head {
   struct list_head *next ;
   struct list_head *prev ;
};
#line 56 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/alternative.h"
struct module;
#line 56
struct module;
#line 146 "include/linux/init.h"
typedef void (*ctor_fn_t)(void);
#line 9 "include/linux/dynamic_debug.h"
struct _ddebug {
   char const   *modname ;
   char const   *function ;
   char const   *filename ;
   char const   *format ;
   unsigned int lineno : 18 ;
   unsigned int flags : 8 ;
} __attribute__((__aligned__(8))) ;
#line 135 "include/linux/kernel.h"
struct completion;
#line 135
struct completion;
#line 20 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/thread_info.h"
struct task_struct;
#line 20
struct task_struct;
#line 7 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/processor.h"
struct task_struct;
#line 52 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/paravirt_types.h"
struct task_struct;
#line 53
struct cpumask;
#line 53
struct cpumask;
#line 329
struct arch_spinlock;
#line 329
struct arch_spinlock;
#line 139 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/ptrace.h"
struct task_struct;
#line 8 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/current.h"
struct task_struct;
#line 10 "include/asm-generic/bug.h"
struct bug_entry {
   int bug_addr_disp ;
   int file_disp ;
   unsigned short line ;
   unsigned short flags ;
};
#line 14 "include/linux/cpumask.h"
struct cpumask {
   unsigned long bits[((4096UL + 8UL * sizeof(long )) - 1UL) / (8UL * sizeof(long ))] ;
};
#line 637 "include/linux/cpumask.h"
typedef struct cpumask *cpumask_var_t;
#line 234 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/paravirt.h"
struct static_key;
#line 234
struct static_key;
#line 23 "include/asm-generic/atomic-long.h"
typedef atomic64_t atomic_long_t;
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
#line 49 "include/linux/wait.h"
struct __wait_queue_head {
   spinlock_t lock ;
   struct list_head task_list ;
};
#line 53 "include/linux/wait.h"
typedef struct __wait_queue_head wait_queue_head_t;
#line 55
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
#line 25 "include/linux/completion.h"
struct completion {
   unsigned int done ;
   wait_queue_head_t wait ;
};
#line 17 "include/linux/workqueue.h"
struct work_struct;
#line 17
struct work_struct;
#line 79 "include/linux/workqueue.h"
struct work_struct {
   atomic_long_t data ;
   struct list_head entry ;
   void (*func)(struct work_struct *work ) ;
};
#line 29 "include/linux/sysctl.h"
struct completion;
#line 270 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/elf.h"
struct task_struct;
#line 18 "include/linux/elf.h"
typedef __u64 Elf64_Addr;
#line 19 "include/linux/elf.h"
typedef __u16 Elf64_Half;
#line 23 "include/linux/elf.h"
typedef __u32 Elf64_Word;
#line 24 "include/linux/elf.h"
typedef __u64 Elf64_Xword;
#line 194 "include/linux/elf.h"
struct elf64_sym {
   Elf64_Word st_name ;
   unsigned char st_info ;
   unsigned char st_other ;
   Elf64_Half st_shndx ;
   Elf64_Addr st_value ;
   Elf64_Xword st_size ;
};
#line 194 "include/linux/elf.h"
typedef struct elf64_sym Elf64_Sym;
#line 20 "include/linux/kobject_ns.h"
struct sock;
#line 20
struct sock;
#line 21
struct kobject;
#line 21
struct kobject;
#line 27
enum kobj_ns_type {
    KOBJ_NS_TYPE_NONE = 0,
    KOBJ_NS_TYPE_NET = 1,
    KOBJ_NS_TYPES = 2
} ;
#line 40 "include/linux/kobject_ns.h"
struct kobj_ns_type_operations {
   enum kobj_ns_type type ;
   void *(*grab_current_ns)(void) ;
   void const   *(*netlink_ns)(struct sock *sk ) ;
   void const   *(*initial_ns)(void) ;
   void (*drop_ns)(void * ) ;
};
#line 22 "include/linux/sysfs.h"
struct kobject;
#line 23
struct module;
#line 24
enum kobj_ns_type;
#line 26 "include/linux/sysfs.h"
struct attribute {
   char const   *name ;
   umode_t mode ;
};
#line 112 "include/linux/sysfs.h"
struct sysfs_ops {
   ssize_t (*show)(struct kobject * , struct attribute * , char * ) ;
   ssize_t (*store)(struct kobject * , struct attribute * , char const   * , size_t  ) ;
   void const   *(*namespace)(struct kobject * , struct attribute  const  * ) ;
};
#line 118
struct sysfs_dirent;
#line 118
struct sysfs_dirent;
#line 22 "include/linux/kref.h"
struct kref {
   atomic_t refcount ;
};
#line 60 "include/linux/kobject.h"
struct kset;
#line 60
struct kobj_type;
#line 60 "include/linux/kobject.h"
struct kobject {
   char const   *name ;
   struct list_head entry ;
   struct kobject *parent ;
   struct kset *kset ;
   struct kobj_type *ktype ;
   struct sysfs_dirent *sd ;
   struct kref kref ;
   unsigned int state_initialized : 1 ;
   unsigned int state_in_sysfs : 1 ;
   unsigned int state_add_uevent_sent : 1 ;
   unsigned int state_remove_uevent_sent : 1 ;
   unsigned int uevent_suppress : 1 ;
};
#line 108 "include/linux/kobject.h"
struct kobj_type {
   void (*release)(struct kobject *kobj ) ;
   struct sysfs_ops  const  *sysfs_ops ;
   struct attribute **default_attrs ;
   struct kobj_ns_type_operations  const  *(*child_ns_type)(struct kobject *kobj ) ;
   void const   *(*namespace)(struct kobject *kobj ) ;
};
#line 116 "include/linux/kobject.h"
struct kobj_uevent_env {
   char *envp[32] ;
   int envp_idx ;
   char buf[2048] ;
   int buflen ;
};
#line 123 "include/linux/kobject.h"
struct kset_uevent_ops {
   int (* const  filter)(struct kset *kset , struct kobject *kobj ) ;
   char const   *(* const  name)(struct kset *kset , struct kobject *kobj ) ;
   int (* const  uevent)(struct kset *kset , struct kobject *kobj , struct kobj_uevent_env *env ) ;
};
#line 140
struct sock;
#line 159 "include/linux/kobject.h"
struct kset {
   struct list_head list ;
   spinlock_t list_lock ;
   struct kobject kobj ;
   struct kset_uevent_ops  const  *uevent_ops ;
};
#line 39 "include/linux/moduleparam.h"
struct kernel_param;
#line 39
struct kernel_param;
#line 41 "include/linux/moduleparam.h"
struct kernel_param_ops {
   int (*set)(char const   *val , struct kernel_param  const  *kp ) ;
   int (*get)(char *buffer , struct kernel_param  const  *kp ) ;
   void (*free)(void *arg ) ;
};
#line 50
struct kparam_string;
#line 50
struct kparam_array;
#line 50 "include/linux/moduleparam.h"
union __anonunion____missing_field_name_199 {
   void *arg ;
   struct kparam_string  const  *str ;
   struct kparam_array  const  *arr ;
};
#line 50 "include/linux/moduleparam.h"
struct kernel_param {
   char const   *name ;
   struct kernel_param_ops  const  *ops ;
   u16 perm ;
   s16 level ;
   union __anonunion____missing_field_name_199 __annonCompField32 ;
};
#line 63 "include/linux/moduleparam.h"
struct kparam_string {
   unsigned int maxlen ;
   char *string ;
};
#line 69 "include/linux/moduleparam.h"
struct kparam_array {
   unsigned int max ;
   unsigned int elemsize ;
   unsigned int *num ;
   struct kernel_param_ops  const  *ops ;
   void *elem ;
};
#line 445
struct module;
#line 80 "include/linux/jump_label.h"
struct module;
#line 143 "include/linux/jump_label.h"
struct static_key {
   atomic_t enabled ;
};
#line 22 "include/linux/tracepoint.h"
struct module;
#line 23
struct tracepoint;
#line 23
struct tracepoint;
#line 25 "include/linux/tracepoint.h"
struct tracepoint_func {
   void *func ;
   void *data ;
};
#line 30 "include/linux/tracepoint.h"
struct tracepoint {
   char const   *name ;
   struct static_key key ;
   void (*regfunc)(void) ;
   void (*unregfunc)(void) ;
   struct tracepoint_func *funcs ;
};
#line 19 "include/linux/export.h"
struct kernel_symbol {
   unsigned long value ;
   char const   *name ;
};
#line 8 "include/asm-generic/module.h"
struct mod_arch_specific {

};
#line 35 "include/linux/module.h"
struct module;
#line 37
struct module_param_attrs;
#line 37 "include/linux/module.h"
struct module_kobject {
   struct kobject kobj ;
   struct module *mod ;
   struct kobject *drivers_dir ;
   struct module_param_attrs *mp ;
};
#line 44 "include/linux/module.h"
struct module_attribute {
   struct attribute attr ;
   ssize_t (*show)(struct module_attribute * , struct module_kobject * , char * ) ;
   ssize_t (*store)(struct module_attribute * , struct module_kobject * , char const   * ,
                    size_t count ) ;
   void (*setup)(struct module * , char const   * ) ;
   int (*test)(struct module * ) ;
   void (*free)(struct module * ) ;
};
#line 71
struct exception_table_entry;
#line 71
struct exception_table_entry;
#line 199
enum module_state {
    MODULE_STATE_LIVE = 0,
    MODULE_STATE_COMING = 1,
    MODULE_STATE_GOING = 2
} ;
#line 215 "include/linux/module.h"
struct module_ref {
   unsigned long incs ;
   unsigned long decs ;
} __attribute__((__aligned__((2) *  (sizeof(unsigned long )) ))) ;
#line 220
struct module_sect_attrs;
#line 220
struct module_notes_attrs;
#line 220
struct ftrace_event_call;
#line 220 "include/linux/module.h"
struct module {
   enum module_state state ;
   struct list_head list ;
   char name[64UL - sizeof(unsigned long )] ;
   struct module_kobject mkobj ;
   struct module_attribute *modinfo_attrs ;
   char const   *version ;
   char const   *srcversion ;
   struct kobject *holders_dir ;
   struct kernel_symbol  const  *syms ;
   unsigned long const   *crcs ;
   unsigned int num_syms ;
   struct kernel_param *kp ;
   unsigned int num_kp ;
   unsigned int num_gpl_syms ;
   struct kernel_symbol  const  *gpl_syms ;
   unsigned long const   *gpl_crcs ;
   struct kernel_symbol  const  *unused_syms ;
   unsigned long const   *unused_crcs ;
   unsigned int num_unused_syms ;
   unsigned int num_unused_gpl_syms ;
   struct kernel_symbol  const  *unused_gpl_syms ;
   unsigned long const   *unused_gpl_crcs ;
   struct kernel_symbol  const  *gpl_future_syms ;
   unsigned long const   *gpl_future_crcs ;
   unsigned int num_gpl_future_syms ;
   unsigned int num_exentries ;
   struct exception_table_entry *extable ;
   int (*init)(void) ;
   void *module_init ;
   void *module_core ;
   unsigned int init_size ;
   unsigned int core_size ;
   unsigned int init_text_size ;
   unsigned int core_text_size ;
   unsigned int init_ro_size ;
   unsigned int core_ro_size ;
   struct mod_arch_specific arch ;
   unsigned int taints ;
   unsigned int num_bugs ;
   struct list_head bug_list ;
   struct bug_entry *bug_table ;
   Elf64_Sym *symtab ;
   Elf64_Sym *core_symtab ;
   unsigned int num_symtab ;
   unsigned int core_num_syms ;
   char *strtab ;
   char *core_strtab ;
   struct module_sect_attrs *sect_attrs ;
   struct module_notes_attrs *notes_attrs ;
   char *args ;
   void *percpu ;
   unsigned int percpu_size ;
   unsigned int num_tracepoints ;
   struct tracepoint * const  *tracepoints_ptrs ;
   unsigned int num_trace_bprintk_fmt ;
   char const   **trace_bprintk_fmt_start ;
   struct ftrace_event_call **trace_events ;
   unsigned int num_trace_events ;
   struct list_head source_list ;
   struct list_head target_list ;
   struct task_struct *waiter ;
   void (*exit)(void) ;
   struct module_ref *refptr ;
   ctor_fn_t *ctors ;
   unsigned int num_ctors ;
};
#line 67 "include/linux/cpufreq.h"
struct cpufreq_governor;
#line 67
struct cpufreq_governor;
#line 73 "include/linux/cpufreq.h"
struct cpufreq_cpuinfo {
   unsigned int max_freq ;
   unsigned int min_freq ;
   unsigned int transition_latency ;
};
#line 81 "include/linux/cpufreq.h"
struct cpufreq_real_policy {
   unsigned int min ;
   unsigned int max ;
   unsigned int policy ;
   struct cpufreq_governor *governor ;
};
#line 88 "include/linux/cpufreq.h"
struct cpufreq_policy {
   cpumask_var_t cpus ;
   cpumask_var_t related_cpus ;
   unsigned int shared_type ;
   unsigned int cpu ;
   struct cpufreq_cpuinfo cpuinfo ;
   unsigned int min ;
   unsigned int max ;
   unsigned int cur ;
   unsigned int policy ;
   struct cpufreq_governor *governor ;
   struct work_struct update ;
   struct cpufreq_real_policy user_policy ;
   struct kobject kobj ;
   struct completion kobj_unregister ;
};
#line 171 "include/linux/cpufreq.h"
struct cpufreq_governor {
   char name[16] ;
   int (*governor)(struct cpufreq_policy *policy , unsigned int event ) ;
   ssize_t (*show_setspeed)(struct cpufreq_policy *policy , char *buf ) ;
   int (*store_setspeed)(struct cpufreq_policy *policy , unsigned int freq ) ;
   unsigned int max_transition_latency ;
   struct list_head governor_list ;
   struct module *owner ;
};
#line 1 "<compiler builtins>"
long ldv__builtin_expect(long val , long res ) ;
#line 44 "include/linux/dynamic_debug.h"
extern int ( /* format attribute */  __dynamic_pr_debug)(struct _ddebug *descriptor ,
                                                         char const   *fmt  , ...) ;
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
#line 26 "include/linux/export.h"
extern struct module __this_module ;
#line 67 "include/linux/module.h"
int init_module(void) ;
#line 68
void cleanup_module(void) ;
#line 192 "include/linux/cpufreq.h"
extern int __cpufreq_driver_target(struct cpufreq_policy *policy , unsigned int target_freq ,
                                   unsigned int relation ) ;
#line 200
extern int cpufreq_register_governor(struct cpufreq_governor *governor ) ;
#line 201
extern void cpufreq_unregister_governor(struct cpufreq_governor *governor ) ;
#line 25 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
static int cpufreq_governor_powersave(struct cpufreq_policy *policy , unsigned int event ) ;
#line 25 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
static struct _ddebug  __attribute__((__aligned__(8))) descriptor  __attribute__((__used__,
__section__("__verbose")))  =    {"cpufreq_powersave", "cpufreq_governor_powersave", "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c",
    "setting to %u kHz because of event %u\n", 26U, 0U};
#line 19 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
static int cpufreq_governor_powersave(struct cpufreq_policy *policy , unsigned int event ) 
{ long tmp ;
  struct _ddebug  __attribute__((__aligned__(8))) *__cil_tmp4 ;
  unsigned int __cil_tmp5 ;
  unsigned int __cil_tmp6 ;
  int __cil_tmp7 ;
  int __cil_tmp8 ;
  long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned int __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned int __cil_tmp15 ;

  {
#line 23
  if ((int )event == 1) {
#line 23
    goto case_1;
  } else
#line 24
  if ((int )event == 3) {
#line 24
    goto case_1;
  } else {
    {
#line 30
    goto switch_default;
#line 22
    if (0) {
      case_1: /* CIL Label */ 
      case_3: /* CIL Label */ 
      {
#line 25
      while (1) {
        while_continue: /* CIL Label */ ;
        {
#line 25
        __cil_tmp4 = & descriptor;
#line 25
        __cil_tmp5 = __cil_tmp4->flags;
#line 25
        __cil_tmp6 = __cil_tmp5 & 1U;
#line 25
        __cil_tmp7 = ! __cil_tmp6;
#line 25
        __cil_tmp8 = ! __cil_tmp7;
#line 25
        __cil_tmp9 = (long )__cil_tmp8;
#line 25
        tmp = ldv__builtin_expect(__cil_tmp9, 0L);
        }
#line 25
        if (tmp) {
          {
#line 25
          __cil_tmp10 = (unsigned long )policy;
#line 25
          __cil_tmp11 = __cil_tmp10 + 36;
#line 25
          __cil_tmp12 = *((unsigned int *)__cil_tmp11);
#line 25
          __dynamic_pr_debug(& descriptor, "setting to %u kHz because of event %u\n",
                             __cil_tmp12, event);
          }
        } else {

        }
#line 25
        goto while_break;
      }
      while_break: /* CIL Label */ ;
      }
      {
#line 27
      __cil_tmp13 = (unsigned long )policy;
#line 27
      __cil_tmp14 = __cil_tmp13 + 36;
#line 27
      __cil_tmp15 = *((unsigned int *)__cil_tmp14);
#line 27
      __cpufreq_driver_target(policy, __cil_tmp15, 0U);
      }
#line 29
      goto switch_break;
      switch_default: /* CIL Label */ 
#line 31
      goto switch_break;
    } else {
      switch_break: /* CIL Label */ ;
    }
    }
  }
#line 33
  return (0);
}
}
#line 37 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
static struct cpufreq_governor cpufreq_gov_powersave  =    {{(char )'p', (char )'o', (char )'w', (char )'e', (char )'r', (char )'s', (char )'a',
     (char )'v', (char )'e', (char )'\000', (char)0, (char)0, (char)0, (char)0, (char)0,
     (char)0}, & cpufreq_governor_powersave, (ssize_t (*)(struct cpufreq_policy *policy ,
                                                          char *buf ))0, (int (*)(struct cpufreq_policy *policy ,
                                                                                  unsigned int freq ))0,
    0U, {(struct list_head *)0, (struct list_head *)0}, & __this_module};
#line 45
static int cpufreq_gov_powersave_init(void)  __attribute__((__section__(".init.text"),
__no_instrument_function__)) ;
#line 45 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
static int cpufreq_gov_powersave_init(void) 
{ int tmp ;

  {
  {
#line 47
  tmp = cpufreq_register_governor(& cpufreq_gov_powersave);
  }
#line 47
  return (tmp);
}
}
#line 51
static void cpufreq_gov_powersave_exit(void)  __attribute__((__section__(".exit.text"),
__no_instrument_function__)) ;
#line 51 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
static void cpufreq_gov_powersave_exit(void) 
{ 

  {
  {
#line 53
  cpufreq_unregister_governor(& cpufreq_gov_powersave);
  }
#line 54
  return;
}
}
#line 57 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
static char const   __mod_author57[42]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 57
  {      (char const   )'a',      (char const   )'u',      (char const   )'t',      (char const   )'h', 
        (char const   )'o',      (char const   )'r',      (char const   )'=',      (char const   )'D', 
        (char const   )'o',      (char const   )'m',      (char const   )'i',      (char const   )'n', 
        (char const   )'i',      (char const   )'k',      (char const   )' ',      (char const   )'B', 
        (char const   )'r',      (char const   )'o',      (char const   )'d',      (char const   )'o', 
        (char const   )'w',      (char const   )'s',      (char const   )'k',      (char const   )'i', 
        (char const   )' ',      (char const   )'<',      (char const   )'l',      (char const   )'i', 
        (char const   )'n',      (char const   )'u',      (char const   )'x',      (char const   )'@', 
        (char const   )'b',      (char const   )'r',      (char const   )'o',      (char const   )'d', 
        (char const   )'o',      (char const   )'.',      (char const   )'d',      (char const   )'e', 
        (char const   )'>',      (char const   )'\000'};
#line 58 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
static char const   __mod_description58[48]  __attribute__((__used__, __unused__,
__section__(".modinfo"), __aligned__(1)))  = 
#line 58
  {      (char const   )'d',      (char const   )'e',      (char const   )'s',      (char const   )'c', 
        (char const   )'r',      (char const   )'i',      (char const   )'p',      (char const   )'t', 
        (char const   )'i',      (char const   )'o',      (char const   )'n',      (char const   )'=', 
        (char const   )'C',      (char const   )'P',      (char const   )'U',      (char const   )'f', 
        (char const   )'r',      (char const   )'e',      (char const   )'q',      (char const   )' ', 
        (char const   )'p',      (char const   )'o',      (char const   )'l',      (char const   )'i', 
        (char const   )'c',      (char const   )'y',      (char const   )' ',      (char const   )'g', 
        (char const   )'o',      (char const   )'v',      (char const   )'e',      (char const   )'r', 
        (char const   )'n',      (char const   )'o',      (char const   )'r',      (char const   )' ', 
        (char const   )'\'',      (char const   )'p',      (char const   )'o',      (char const   )'w', 
        (char const   )'e',      (char const   )'r',      (char const   )'s',      (char const   )'a', 
        (char const   )'v',      (char const   )'e',      (char const   )'\'',      (char const   )'\000'};
#line 59 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
static char const   __mod_license59[12]  __attribute__((__used__, __unused__, __section__(".modinfo"),
__aligned__(1)))  = 
#line 59
  {      (char const   )'l',      (char const   )'i',      (char const   )'c',      (char const   )'e', 
        (char const   )'n',      (char const   )'s',      (char const   )'e',      (char const   )'=', 
        (char const   )'G',      (char const   )'P',      (char const   )'L',      (char const   )'\000'};
#line 64 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
int init_module(void) 
{ int tmp ;

  {
  {
#line 64
  tmp = cpufreq_gov_powersave_init();
  }
#line 64
  return (tmp);
}
}
#line 66 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
void cleanup_module(void) 
{ 

  {
  {
#line 66
  cpufreq_gov_powersave_exit();
  }
#line 66
  return;
}
}
#line 84
void ldv_check_final_state(void) ;
#line 90
extern void ldv_initialize(void) ;
#line 93
extern int __VERIFIER_nondet_int(void) ;
#line 96 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
int LDV_IN_INTERRUPT  ;
#line 99 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
void main(void) 
{ struct cpufreq_policy *var_group1 ;
  unsigned int var_cpufreq_governor_powersave_0_p1 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
#line 126
  LDV_IN_INTERRUPT = 1;
#line 135
  ldv_initialize();
#line 144
  tmp = cpufreq_gov_powersave_init();
  }
#line 144
  if (tmp) {
#line 145
    goto ldv_final;
  } else {

  }
  {
#line 154
  while (1) {
    while_continue: /* CIL Label */ ;
    {
#line 154
    tmp___1 = __VERIFIER_nondet_int();
    }
#line 154
    if (tmp___1) {

    } else {
#line 154
      goto while_break;
    }
    {
#line 157
    tmp___0 = __VERIFIER_nondet_int();
    }
#line 159
    if (tmp___0 == 0) {
#line 159
      goto case_0;
    } else {
      {
#line 182
      goto switch_default;
#line 157
      if (0) {
        case_0: /* CIL Label */ 
        {
#line 167
        cpufreq_governor_powersave(var_group1, var_cpufreq_governor_powersave_0_p1);
        }
#line 181
        goto switch_break;
        switch_default: /* CIL Label */ 
#line 182
        goto switch_break;
      } else {
        switch_break: /* CIL Label */ ;
      }
      }
    }
  }
  while_break: /* CIL Label */ ;
  }
  {
#line 197
  cpufreq_gov_powersave_exit();
  }
  ldv_final: 
  {
#line 205
  ldv_check_final_state();
  }
#line 208
  return;
}
}
#line 5 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/engine-blast-assert.h"
void ldv_blast_assert(void) 
{ 

  {
  ERROR: 
#line 6
  goto ERROR;
}
}
#line 6 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/engine-blast.h"
extern int __VERIFIER_nondet_int(void) ;
#line 19 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
int ldv_mutex  =    1;
#line 22 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 50 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 78 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 103 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 114 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 142 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 153 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/kernel-rules/files/model0032.c"
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
#line 217 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--32_1--X--cpachecker/linux-3.4/csd_deg_dscv/3882/dscv_tempdir/dscv/ri/32_1/drivers/cpufreq/cpufreq_powersave.c.common.c"
long ldv__builtin_expect(long val , long res ) 
{ 

  {
#line 218
  return (val);
}
}
