#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

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
	{ 0xf8cdd757, "module_layout" },
	{ 0xbd0768f2, "param_ops_ulong" },
	{ 0x4883cfc3, "pci_unregister_driver" },
	{ 0x21e01071, "class_destroy" },
	{ 0x64c97ae, "device_destroy" },
	{ 0xe85eaefe, "__pci_register_driver" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe42dbab4, "__class_create" },
	{ 0xb840d099, "try_module_get" },
	{ 0x3fca107d, "module_put" },
	{ 0x91715312, "sprintf" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x58d9cd11, "cdev_add" },
	{ 0x71a3afd4, "cdev_init" },
	{ 0xdb9a89d2, "pci_iomap" },
	{ 0x9c656956, "pci_request_regions" },
	{ 0xb33ee6e2, "device_create" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x982a3dc2, "pci_enable_device" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf86c8d03, "kmem_cache_alloc_trace" },
	{ 0x8200293d, "kmalloc_caches" },
	{ 0xfc3b81ee, "alloc_pages_current" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x72e90816, "remap_pfn_range" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc5534d64, "ioread16" },
	{ 0xd06cfeb7, "pci_read_config_dword" },
	{ 0x21935607, "pci_write_config_byte" },
	{ 0x3dc485cf, "pci_read_config_word" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x4b15b75c, "pci_write_config_word" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xf38f65fd, "pci_write_config_dword" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xcf2a6966, "up" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x217e814, "pci_read_config_byte" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x9202ba1c, "current_task" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x361c68dd, "cdev_del" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbf4a2a75, "pci_release_regions" },
	{ 0x24796ca2, "pci_disable_device" },
	{ 0xaa7e9c40, "pci_iounmap" },
	{ 0x27e1a049, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xf63b72ee, "__free_pages" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001057d00001801sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CCB15822D42A5FF39AC2DC9");
MODULE_INFO(rhelversion, "8.2");
