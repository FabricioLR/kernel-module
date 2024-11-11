#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>

static int __init mod_init(void) { 
    printk(KERN_ERR "Hello, world 2\n"); 
    return 0;
} 

static void __exit mod_exit(void) { 
    printk(KERN_ERR "Goodbye, world 2\n"); 
} 


module_init(mod_init); 
module_exit(mod_exit); 

MODULE_LICENSE("GPL");