#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0x8d0ae4f, "struct_module" },
	{ 0x133d4e85, "no_llseek" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0x2a7b11d4, "finish_wait" },
	{ 0x7d1ed1f2, "prepare_to_wait" },
	{ 0x4292364c, "schedule" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xc281c899, "__wake_up" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0x2cf190e3, "request_irq" },
	{ 0xd85a396a, "cdev_add" },
	{ 0xbb37bf2e, "cdev_init" },
	{ 0x6cb34e5, "init_waitqueue_head" },
	{ 0x8f9b86b2, "kfifo_alloc" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0x43b8483, "__kfifo_get" },
	{ 0x1b7d4074, "printk" },
	{ 0xaa527612, "__kfifo_put" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x37a0cba, "kfree" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x4bd6e07e, "cdev_del" },
	{ 0x4719ba4e, "kfifo_free" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";

