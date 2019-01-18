#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5b753d65, "module_layout" },
	{ 0x6a781597, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xb674f819, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xab9e5ae3, "param_ops_int" },
	{ 0x97a020d9, "find_vpid" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xa3d642ef, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x4fab34e4, "skb_clone" },
	{ 0xb1034ecb, "dev_get_by_name" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x6cbf2cdd, "skb_copy" },
	{ 0x81b395b3, "down_interruptible" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xccbd75a3, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x88bfa7e, "cancel_work_sync" },
	{ 0xdf87cf0a, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x57403918, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xfd42508a, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x91715312, "sprintf" },
	{ 0x379ab9f3, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb4607917, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9d59e0b4, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x15864d7d, "netif_rx" },
	{ 0x7dcd56c1, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x8d41732f, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9c92c56f, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x1668a0a0, "netif_tx_wake_queue" },
	{ 0x2464adf4, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb7ecf739, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6a8b6f84, "usb_deregister" },
	{ 0x3cee3b01, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x526f34c1, "free_netdev" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0xe3862a9a, "register_netdev" },
	{ 0xff985925, "wireless_send_event" },
	{ 0x58412533, "usb_control_msg" },
	{ 0x5a921311, "strncmp" },
	{ 0x130d2659, "skb_push" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x59da4686, "kill_pid" },
	{ 0xf0c3d543, "skb_pull" },
	{ 0xca0de1e7, "device_init_wakeup" },
	{ 0x9872b89b, "flush_signals" },
	{ 0x6ad38701, "skb_queue_tail" },
	{ 0xaa684f46, "netif_device_attach" },
	{ 0x518b74e3, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5a688c84, "usb_get_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa80930c7, "usb_reset_device" },
	{ 0x1838b436, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7dfe645, "eth_type_trans" },
	{ 0x883283ed, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xaae0de88, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf714925, "unregister_netdevice_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xfa7d67a1, "dev_alloc_name" },
	{ 0xcf2a6966, "up" },
	{ 0xc4a57ca9, "usb_register_driver" },
	{ 0x44f3fc33, "request_firmware" },
	{ 0xcb8d390c, "skb_dequeue" },
	{ 0x918dd8ca, "unregister_netdev" },
	{ 0x2e0d2f7f, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xd979a547, "__x86_indirect_thunk_rdi" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x1ce38ca6, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x27651e11, "param_ops_uint" },
	{ 0x837d843b, "skb_copy_bits" },
	{ 0x1a53abc7, "usb_free_urb" },
	{ 0xd583ea85, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x760a0f4f, "yield" },
	{ 0x40d62df, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x569ecfdd, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p331Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Cd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E47E644C52A9AC91F605637");
