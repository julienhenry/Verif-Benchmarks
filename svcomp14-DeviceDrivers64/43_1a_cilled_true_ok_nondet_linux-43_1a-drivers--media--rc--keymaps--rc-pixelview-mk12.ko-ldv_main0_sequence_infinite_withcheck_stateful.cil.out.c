/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 43 "include/asm-generic/int-ll64.h"
typedef unsigned char u8;
#line 46 "include/asm-generic/int-ll64.h"
typedef unsigned short u16;
#line 49 "include/asm-generic/int-ll64.h"
typedef unsigned int u32;
#line 52 "include/asm-generic/int-ll64.h"
typedef unsigned long long u64;
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
#line 202 "include/linux/types.h"
typedef unsigned int gfp_t;
#line 221 "include/linux/types.h"
struct __anonstruct_atomic_t_6 {
   int counter ;
};
#line 221 "include/linux/types.h"
typedef struct __anonstruct_atomic_t_6 atomic_t;
#line 226 "include/linux/types.h"
struct __anonstruct_atomic64_t_7 {
   long counter ;
};
#line 226 "include/linux/types.h"
typedef struct __anonstruct_atomic64_t_7 atomic64_t;
#line 227 "include/linux/types.h"
struct list_head {
   struct list_head *next ;
   struct list_head *prev ;
};
#line 58 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/page_types.h"
struct page;
#line 58
struct page;
#line 327 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/paravirt_types.h"
struct arch_spinlock;
#line 327
struct arch_spinlock;
#line 433 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/processor.h"
struct kmem_cache;
#line 23 "include/asm-generic/atomic-long.h"
typedef atomic64_t atomic_long_t;
#line 14 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
typedef u16 __ticket_t;
#line 15 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
typedef u32 __ticketpair_t;
#line 16 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
struct __raw_tickets {
   __ticket_t head ;
   __ticket_t tail ;
};
#line 26 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
union __anonunion_ldv_5907_29 {
   __ticketpair_t head_tail ;
   struct __raw_tickets tickets ;
};
#line 26 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
struct arch_spinlock {
   union __anonunion_ldv_5907_29 ldv_5907 ;
};
#line 27 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/spinlock_types.h"
typedef struct arch_spinlock arch_spinlock_t;
#line 34 "/home/zakharov/launch/inst/current/envs/linux-3.4/linux-3.4/arch/x86/include/asm/rwlock.h"
struct lockdep_map;
#line 34
struct lockdep_map;
#line 55 "include/linux/debug_locks.h"
struct stack_trace {
   unsigned int nr_entries ;
   unsigned int max_entries ;
   unsigned long *entries ;
   int skip ;
};
#line 26 "include/linux/stacktrace.h"
struct lockdep_subclass_key {
   char __one_byte ;
};
#line 53 "include/linux/lockdep.h"
struct lock_class_key {
   struct lockdep_subclass_key subkeys[8U] ;
};
#line 59 "include/linux/lockdep.h"
struct lock_class {
   struct list_head hash_entry ;
   struct list_head lock_entry ;
   struct lockdep_subclass_key *key ;
   unsigned int subclass ;
   unsigned int dep_gen_id ;
   unsigned long usage_mask ;
   struct stack_trace usage_traces[13U] ;
   struct list_head locks_after ;
   struct list_head locks_before ;
   unsigned int version ;
   unsigned long ops ;
   char const   *name ;
   int name_version ;
   unsigned long contention_point[4U] ;
   unsigned long contending_point[4U] ;
};
#line 144 "include/linux/lockdep.h"
struct lockdep_map {
   struct lock_class_key *key ;
   struct lock_class *class_cache[2U] ;
   char const   *name ;
   int cpu ;
   unsigned long ip ;
};
#line 556 "include/linux/lockdep.h"
struct raw_spinlock {
   arch_spinlock_t raw_lock ;
   unsigned int magic ;
   unsigned int owner_cpu ;
   void *owner ;
   struct lockdep_map dep_map ;
};
#line 33 "include/linux/spinlock_types.h"
struct __anonstruct_ldv_6122_33 {
   u8 __padding[24U] ;
   struct lockdep_map dep_map ;
};
#line 33 "include/linux/spinlock_types.h"
union __anonunion_ldv_6123_32 {
   struct raw_spinlock rlock ;
   struct __anonstruct_ldv_6122_33 ldv_6122 ;
};
#line 33 "include/linux/spinlock_types.h"
struct spinlock {
   union __anonunion_ldv_6123_32 ldv_6123 ;
};
#line 76 "include/linux/spinlock_types.h"
typedef struct spinlock spinlock_t;
#line 445 "include/linux/elf.h"
struct sock;
#line 445
struct sock;
#line 446
struct kobject;
#line 446
struct kobject;
#line 447
enum kobj_ns_type {
    KOBJ_NS_TYPE_NONE = 0,
    KOBJ_NS_TYPE_NET = 1,
    KOBJ_NS_TYPES = 2
} ;
#line 453 "include/linux/elf.h"
struct kobj_ns_type_operations {
   enum kobj_ns_type type ;
   void *(*grab_current_ns)(void) ;
   void const   *(*netlink_ns)(struct sock * ) ;
   void const   *(*initial_ns)(void) ;
   void (*drop_ns)(void * ) ;
};
#line 57 "include/linux/kobject_ns.h"
struct attribute {
   char const   *name ;
   umode_t mode ;
   struct lock_class_key *key ;
   struct lock_class_key skey ;
};
#line 98 "include/linux/sysfs.h"
struct sysfs_ops {
   ssize_t (*show)(struct kobject * , struct attribute * , char * ) ;
   ssize_t (*store)(struct kobject * , struct attribute * , char const   * , size_t  ) ;
   void const   *(*namespace)(struct kobject * , struct attribute  const  * ) ;
};
#line 117
struct sysfs_dirent;
#line 117
struct sysfs_dirent;
#line 182 "include/linux/sysfs.h"
struct kref {
   atomic_t refcount ;
};
#line 49 "include/linux/kobject.h"
struct kset;
#line 49
struct kobj_type;
#line 49 "include/linux/kobject.h"
struct kobject {
   char const   *name ;
   struct list_head entry ;
   struct kobject *parent ;
   struct kset *kset ;
   struct kobj_type *ktype ;
   struct sysfs_dirent *sd ;
   struct kref kref ;
   unsigned char state_initialized : 1 ;
   unsigned char state_in_sysfs : 1 ;
   unsigned char state_add_uevent_sent : 1 ;
   unsigned char state_remove_uevent_sent : 1 ;
   unsigned char uevent_suppress : 1 ;
};
#line 107 "include/linux/kobject.h"
struct kobj_type {
   void (*release)(struct kobject * ) ;
   struct sysfs_ops  const  *sysfs_ops ;
   struct attribute **default_attrs ;
   struct kobj_ns_type_operations  const  *(*child_ns_type)(struct kobject * ) ;
   void const   *(*namespace)(struct kobject * ) ;
};
#line 115 "include/linux/kobject.h"
struct kobj_uevent_env {
   char *envp[32U] ;
   int envp_idx ;
   char buf[2048U] ;
   int buflen ;
};
#line 122 "include/linux/kobject.h"
struct kset_uevent_ops {
   int (* const  filter)(struct kset * , struct kobject * ) ;
   char const   *(* const  name)(struct kset * , struct kobject * ) ;
   int (* const  uevent)(struct kset * , struct kobject * , struct kobj_uevent_env * ) ;
};
#line 139 "include/linux/kobject.h"
struct kset {
   struct list_head list ;
   spinlock_t list_lock ;
   struct kobject kobj ;
   struct kset_uevent_ops  const  *uevent_ops ;
};
#line 88 "include/linux/kmemleak.h"
struct kmem_cache_cpu {
   void **freelist ;
   unsigned long tid ;
   struct page *page ;
   struct page *partial ;
   int node ;
   unsigned int stat[26U] ;
};
#line 55 "include/linux/slub_def.h"
struct kmem_cache_node {
   spinlock_t list_lock ;
   unsigned long nr_partial ;
   struct list_head partial ;
   atomic_long_t nr_slabs ;
   atomic_long_t total_objects ;
   struct list_head full ;
};
#line 66 "include/linux/slub_def.h"
struct kmem_cache_order_objects {
   unsigned long x ;
};
#line 76 "include/linux/slub_def.h"
struct kmem_cache {
   struct kmem_cache_cpu *cpu_slab ;
   unsigned long flags ;
   unsigned long min_partial ;
   int size ;
   int objsize ;
   int offset ;
   int cpu_partial ;
   struct kmem_cache_order_objects oo ;
   struct kmem_cache_order_objects max ;
   struct kmem_cache_order_objects min ;
   gfp_t allocflags ;
   int refcount ;
   void (*ctor)(void * ) ;
   int inuse ;
   int align ;
   int reserved ;
   char const   *name ;
   struct list_head list ;
   struct kobject kobj ;
   int remote_node_defrag_ratio ;
   struct kmem_cache_node *node[1024U] ;
};
#line 1650 "include/linux/input.h"
struct rc_map_table {
   u32 scancode ;
   u32 keycode ;
};
#line 35 "include/media/rc-map.h"
struct rc_map {
   struct rc_map_table *scan ;
   unsigned int size ;
   unsigned int len ;
   unsigned int alloc ;
   u64 rc_type ;
   char const   *name ;
   spinlock_t lock ;
};
#line 45 "include/media/rc-map.h"
struct rc_map_list {
   struct list_head list ;
   struct rc_map map ;
};
#line 2 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
void ldv_spin_lock(void) ;
#line 3
void ldv_spin_unlock(void) ;
#line 4
int ldv_spin_trylock(void) ;
#line 220 "include/linux/slub_def.h"
extern void *kmem_cache_alloc(struct kmem_cache * , gfp_t  ) ;
#line 223
void *ldv_kmem_cache_alloc_16(struct kmem_cache *ldv_func_arg1 , gfp_t ldv_func_arg2 ) ;
#line 11 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
void ldv_check_alloc_flags(gfp_t flags ) ;
#line 12
void ldv_check_alloc_nonatomic(void) ;
#line 14
struct page *ldv_check_alloc_flags_and_return_some_page(gfp_t flags ) ;
#line 53 "include/media/rc-map.h"
extern int rc_map_register(struct rc_map_list * ) ;
#line 54
extern void rc_map_unregister(struct rc_map_list * ) ;
#line 35 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
static struct rc_map_table pixelview_mk12[31U]  = 
#line 35 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
  {      {8809219U, 386U}, 
        {8809246U, 356U}, 
        {8809217U, 2U}, 
        {8809227U, 3U}, 
        {8809243U, 4U}, 
        {8809221U, 5U}, 
        {8809225U, 6U}, 
        {8809237U, 7U}, 
        {8809222U, 8U}, 
        {8809226U, 9U}, 
        {8809234U, 10U}, 
        {8809218U, 11U}, 
        {8809235U, 129U}, 
        {8809232U, 413U}, 
        {8809216U, 393U}, 
        {8809240U, 113U}, 
        {8809241U, 212U}, 
        {8809242U, 217U}, 
        {8809238U, 402U}, 
        {8809236U, 403U}, 
        {8809247U, 115U}, 
        {8809239U, 114U}, 
        {8809244U, 372U}, 
        {8809220U, 168U}, 
        {8809230U, 167U}, 
        {8809228U, 159U}, 
        {8809245U, 128U}, 
        {8809224U, 207U}, 
        {8809231U, 119U}, 
        {8809229U, 377U}, 
        {8809223U, 385U}};
#line 76 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
static struct rc_map_list pixelview_map  =    {{(struct list_head *)0, (struct list_head *)0}, {(struct rc_map_table *)(& pixelview_mk12),
                                                     31U, 0U, 0U, 2ULL, "rc-pixelview-mk12",
                                                     {{{{{0U}}, 0U, 0U, (void *)0,
                                                        {(struct lock_class_key *)0,
                                                         {(struct lock_class *)0,
                                                          (struct lock_class *)0},
                                                         (char const   *)0, 0, 0UL}}}}}};
#line 85 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
static int init_rc_map_pixelview(void) 
{ int tmp ;

  {
  {
#line 87
  tmp = rc_map_register(& pixelview_map);
  }
#line 87
  return (tmp);
}
}
#line 90 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
static void exit_rc_map_pixelview(void) 
{ 

  {
  {
#line 92
  rc_map_unregister(& pixelview_map);
  }
#line 93
  return;
}
}
#line 117
extern void ldv_check_final_state(void) ;
#line 123
extern void ldv_initialize(void) ;
#line 126
extern int __VERIFIER_nondet_int(void) ;
#line 129 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
int LDV_IN_INTERRUPT  ;
#line 132 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
void main(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
#line 144
  LDV_IN_INTERRUPT = 1;
#line 153
  ldv_initialize();
#line 159
  tmp = init_rc_map_pixelview();
  }
#line 159
  if (tmp != 0) {
#line 160
    goto ldv_final;
  } else {

  }
#line 162
  goto ldv_19081;
  ldv_19080: 
  {
#line 165
  tmp___0 = __VERIFIER_nondet_int();
  }
  {
#line 167
  goto switch_default;
#line 165
  if (0) {
    switch_default: /* CIL Label */ ;
#line 167
    goto ldv_19079;
  } else {
    switch_break: /* CIL Label */ ;
  }
  }
  ldv_19079: ;
  ldv_19081: 
  {
#line 162
  tmp___1 = __VERIFIER_nondet_int();
  }
#line 162
  if (tmp___1 != 0) {
#line 163
    goto ldv_19080;
  } else {
#line 165
    goto ldv_19082;
  }
  ldv_19082: ;
  {
#line 179
  exit_rc_map_pixelview();
  }
  ldv_final: 
  {
#line 182
  ldv_check_final_state();
  }
#line 185
  return;
}
}
#line 5 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/kernel-rules/files/engine-blast-assert.h"
void ldv_blast_assert(void) 
{ 

  {
  ERROR: ;
#line 6
  goto ERROR;
}
}
#line 6 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/kernel-rules/files/engine-blast.h"
extern int __VERIFIER_nondet_int(void) ;
#line 206 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
int ldv_spin  =    0;
#line 210 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
void ldv_check_alloc_flags(gfp_t flags ) 
{ 

  {
#line 213
  if (ldv_spin != 0) {
#line 213
    if (flags != 32U) {
      {
#line 213
      ldv_blast_assert();
      }
    } else {

    }
  } else {

  }
#line 216
  return;
}
}
#line 216
extern struct page *ldv_some_page(void) ;
#line 219 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
struct page *ldv_check_alloc_flags_and_return_some_page(gfp_t flags ) 
{ struct page *tmp ;

  {
#line 222
  if (ldv_spin != 0) {
#line 222
    if (flags != 32U) {
      {
#line 222
      ldv_blast_assert();
      }
    } else {

    }
  } else {

  }
  {
#line 224
  tmp = ldv_some_page();
  }
#line 224
  return (tmp);
}
}
#line 228 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
void ldv_check_alloc_nonatomic(void) 
{ 

  {
#line 231
  if (ldv_spin != 0) {
    {
#line 231
    ldv_blast_assert();
    }
  } else {

  }
#line 234
  return;
}
}
#line 235 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
void ldv_spin_lock(void) 
{ 

  {
#line 238
  ldv_spin = 1;
#line 239
  return;
}
}
#line 242 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
void ldv_spin_unlock(void) 
{ 

  {
#line 245
  ldv_spin = 0;
#line 246
  return;
}
}
#line 249 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
int ldv_spin_trylock(void) 
{ int is_lock ;

  {
  {
#line 254
  is_lock = __VERIFIER_nondet_int();
  }
#line 256
  if (is_lock != 0) {
#line 259
    return (0);
  } else {
#line 264
    ldv_spin = 1;
#line 266
    return (1);
  }
}
}
#line 433 "/home/zakharov/launch/work/current--X--drivers/--X--defaultlinux-3.4--X--43_1a--X--cpachecker/linux-3.4/csd_deg_dscv/9185/dscv_tempdir/dscv/ri/43_1a/drivers/media/rc/keymaps/rc-pixelview-mk12.c.p"
void *ldv_kmem_cache_alloc_16(struct kmem_cache *ldv_func_arg1 , gfp_t ldv_func_arg2 ) 
{ 

  {
  {
#line 439
  ldv_check_alloc_flags(ldv_func_arg2);
#line 441
  kmem_cache_alloc(ldv_func_arg1, ldv_func_arg2);
  }
#line 442
  return ((void *)0);
}
}
