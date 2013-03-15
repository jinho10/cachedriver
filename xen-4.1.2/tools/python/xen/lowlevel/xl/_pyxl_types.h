#ifndef __PYXL_TYPES_H
#define __PYXL_TYPES_H

/*
 * DO NOT EDIT.
 *
 * This file is autogenerated by
 * "genwrap.py /home/jinho/xenrepo/packages/xen-4.1.2/tools/python/../../tools/libxl/libxl.idl xen/lowlevel/xl/_pyxl_types.h xen/lowlevel/xl/_pyxl_types.c"
 */

#define PKG "xen.lowlevel.xl"

#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 1)
#define _hidden __attribute__((visibility("hidden")))
#define _protected __attribute__((visibility("protected")))
#else
#define _hidden
#define _protected
#endif

/* Initialise all types */
_hidden void genwrap__init(PyObject *m);

/* Generic type initialiser */
_hidden int genwrap__obj_init(PyObject *self, PyObject *args, PyObject *kwds);

/* Auto-generated get/set functions for simple data-types */
_hidden int genwrap__string_set(PyObject *v, char **str);
_hidden PyObject *genwrap__string_get(char **str);
_hidden PyObject *genwrap__ull_get(unsigned long long val);
_hidden int genwrap__ull_set(PyObject *v, unsigned long long *val, unsigned long long mask);
_hidden PyObject *genwrap__ll_get(long long val);
_hidden int genwrap__ll_set(PyObject *v, long long *val, long long mask);

/* Internal APU for libxl_dominfo wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_dominfo obj;
}Py_dominfo;

_hidden Py_dominfo *Pydominfo_New(void);

_hidden int Pydominfo_Check(PyObject *self);

_hidden PyObject *attrib__libxl_uuid_get(libxl_uuid *uuid);
_hidden int attrib__libxl_uuid_set(PyObject *v, libxl_uuid *uuid);

/* Internal APU for libxl_cpupoolinfo wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_cpupoolinfo obj;
}Py_cpupoolinfo;

_hidden Py_cpupoolinfo *Pycpupoolinfo_New(void);

_hidden int Pycpupoolinfo_Check(PyObject *self);

_hidden PyObject *attrib__libxl_cpumap_get(libxl_cpumap *cpumap);
_hidden int attrib__libxl_cpumap_set(PyObject *v, libxl_cpumap *cpumap);

/* Internal APU for libxl_vminfo wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_vminfo obj;
}Py_vminfo;

_hidden Py_vminfo *Pyvminfo_New(void);

_hidden int Pyvminfo_Check(PyObject *self);

_hidden PyObject *attrib__libxl_uuid_get(libxl_uuid *uuid);
_hidden int attrib__libxl_uuid_set(PyObject *v, libxl_uuid *uuid);

/* Internal APU for libxl_version_info wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_version_info obj;
}Py_version_info;

_hidden Py_version_info *Pyversion_info_New(void);

_hidden int Pyversion_info_Check(PyObject *self);


/* Internal APU for libxl_domain_create_info wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_domain_create_info obj;
}Py_domain_create_info;

_hidden Py_domain_create_info *Pydomain_create_info_New(void);

_hidden int Pydomain_create_info_Check(PyObject *self);

_hidden PyObject *attrib__libxl_uuid_get(libxl_uuid *uuid);
_hidden int attrib__libxl_uuid_set(PyObject *v, libxl_uuid *uuid);
_hidden PyObject *attrib__libxl_key_value_list_get(libxl_key_value_list *xsdata);
_hidden int attrib__libxl_key_value_list_set(PyObject *v, libxl_key_value_list *xsdata);
_hidden PyObject *attrib__libxl_key_value_list_get(libxl_key_value_list *platformdata);
_hidden int attrib__libxl_key_value_list_set(PyObject *v, libxl_key_value_list *platformdata);

/* Internal APU for libxl_domain_build_info wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_domain_build_info obj;
}Py_domain_build_info;

_hidden Py_domain_build_info *Pydomain_build_info_New(void);

_hidden int Pydomain_build_info_Check(PyObject *self);

_hidden PyObject *attrib__libxl_file_reference_get(libxl_file_reference *kernel);
_hidden int attrib__libxl_file_reference_set(PyObject *v, libxl_file_reference *kernel);
_hidden PyObject *attrib__libxl_cpuid_policy_list_get(libxl_cpuid_policy_list *cpuid);
_hidden int attrib__libxl_cpuid_policy_list_set(PyObject *v, libxl_cpuid_policy_list *cpuid);

/* Internal APU for libxl_domain_build_state wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_domain_build_state obj;
}Py_domain_build_state;

_hidden Py_domain_build_state *Pydomain_build_state_New(void);

_hidden int Pydomain_build_state_Check(PyObject *self);


/* Internal APU for libxl_device_model_info wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_device_model_info obj;
}Py_device_model_info;

_hidden Py_device_model_info *Pydevice_model_info_New(void);

_hidden int Pydevice_model_info_Check(PyObject *self);

_hidden PyObject *attrib__libxl_uuid_get(libxl_uuid *uuid);
_hidden int attrib__libxl_uuid_set(PyObject *v, libxl_uuid *uuid);
_hidden PyObject *attrib__libxl_string_list_get(libxl_string_list *extra);
_hidden int attrib__libxl_string_list_set(PyObject *v, libxl_string_list *extra);

/* Internal APU for libxl_device_vfb wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_device_vfb obj;
}Py_device_vfb;

_hidden Py_device_vfb *Pydevice_vfb_New(void);

_hidden int Pydevice_vfb_Check(PyObject *self);


/* Internal APU for libxl_device_vkb wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_device_vkb obj;
}Py_device_vkb;

_hidden Py_device_vkb *Pydevice_vkb_New(void);

_hidden int Pydevice_vkb_Check(PyObject *self);


/* Internal APU for libxl_device_console wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_device_console obj;
}Py_device_console;

_hidden Py_device_console *Pydevice_console_New(void);

_hidden int Pydevice_console_Check(PyObject *self);

_hidden PyObject *attrib__libxl_domain_build_state_ptr_get(libxl_domain_build_state * *build_state);
_hidden int attrib__libxl_domain_build_state_ptr_set(PyObject *v, libxl_domain_build_state * *build_state);

/* Internal APU for libxl_device_disk wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_device_disk obj;
}Py_device_disk;

_hidden Py_device_disk *Pydevice_disk_New(void);

_hidden int Pydevice_disk_Check(PyObject *self);


/* Internal APU for libxl_device_nic wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_device_nic obj;
}Py_device_nic;

_hidden Py_device_nic *Pydevice_nic_New(void);

_hidden int Pydevice_nic_Check(PyObject *self);

_hidden PyObject *attrib__libxl_mac_get(libxl_mac *mac);
_hidden int attrib__libxl_mac_set(PyObject *v, libxl_mac *mac);

/* Internal APU for libxl_device_net2 wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_device_net2 obj;
}Py_device_net2;

_hidden Py_device_net2 *Pydevice_net2_New(void);

_hidden int Pydevice_net2_Check(PyObject *self);

_hidden PyObject *attrib__libxl_mac_get(libxl_mac *front_mac);
_hidden int attrib__libxl_mac_set(PyObject *v, libxl_mac *front_mac);
_hidden PyObject *attrib__libxl_mac_get(libxl_mac *back_mac);
_hidden int attrib__libxl_mac_set(PyObject *v, libxl_mac *back_mac);

/* Internal APU for libxl_device_pci wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_device_pci obj;
}Py_device_pci;

_hidden Py_device_pci *Pydevice_pci_New(void);

_hidden int Pydevice_pci_Check(PyObject *self);


/* Internal APU for libxl_diskinfo wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_diskinfo obj;
}Py_diskinfo;

_hidden Py_diskinfo *Pydiskinfo_New(void);

_hidden int Pydiskinfo_Check(PyObject *self);


/* Internal APU for libxl_nicinfo wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_nicinfo obj;
}Py_nicinfo;

_hidden Py_nicinfo *Pynicinfo_New(void);

_hidden int Pynicinfo_Check(PyObject *self);

_hidden PyObject *attrib__libxl_mac_get(libxl_mac *mac);
_hidden int attrib__libxl_mac_set(PyObject *v, libxl_mac *mac);

/* Internal APU for libxl_vcpuinfo wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_vcpuinfo obj;
}Py_vcpuinfo;

_hidden Py_vcpuinfo *Pyvcpuinfo_New(void);

_hidden int Pyvcpuinfo_Check(PyObject *self);

_hidden PyObject *attrib__libxl_cpumap_get(libxl_cpumap *cpumap);
_hidden int attrib__libxl_cpumap_set(PyObject *v, libxl_cpumap *cpumap);

/* Internal APU for libxl_physinfo wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_physinfo obj;
}Py_physinfo;

_hidden Py_physinfo *Pyphysinfo_New(void);

_hidden int Pyphysinfo_Check(PyObject *self);

_hidden PyObject *attrib__libxl_hwcap_get(libxl_hwcap *hw_cap);
_hidden int attrib__libxl_hwcap_set(PyObject *v, libxl_hwcap *hw_cap);

/* Internal APU for libxl_topologyinfo wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_topologyinfo obj;
}Py_topologyinfo;

_hidden Py_topologyinfo *Pytopologyinfo_New(void);

_hidden int Pytopologyinfo_Check(PyObject *self);

_hidden PyObject *attrib__libxl_cpuarray_get(libxl_cpuarray *coremap);
_hidden int attrib__libxl_cpuarray_set(PyObject *v, libxl_cpuarray *coremap);
_hidden PyObject *attrib__libxl_cpuarray_get(libxl_cpuarray *socketmap);
_hidden int attrib__libxl_cpuarray_set(PyObject *v, libxl_cpuarray *socketmap);
_hidden PyObject *attrib__libxl_cpuarray_get(libxl_cpuarray *nodemap);
_hidden int attrib__libxl_cpuarray_set(PyObject *v, libxl_cpuarray *nodemap);

/* Internal APU for libxl_sched_credit wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_sched_credit obj;
}Py_sched_credit;

_hidden Py_sched_credit *Pysched_credit_New(void);

_hidden int Pysched_credit_Check(PyObject *self);


/* Internal APU for libxl_net2info wrapper */
typedef struct {
    PyObject_HEAD;
    libxl_net2info obj;
}Py_net2info;

_hidden Py_net2info *Pynet2info_New(void);

_hidden int Pynet2info_Check(PyObject *self);

_hidden PyObject *attrib__libxl_mac_get(libxl_mac *mac);
_hidden int attrib__libxl_mac_set(PyObject *v, libxl_mac *mac);
_hidden PyObject *attrib__libxl_mac_get(libxl_mac *back_mac);
_hidden int attrib__libxl_mac_set(PyObject *v, libxl_mac *back_mac);

#endif /* __PYXL_TYPES_H */
