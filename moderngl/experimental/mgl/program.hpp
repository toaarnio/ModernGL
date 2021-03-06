#pragma once
#include "mgl.hpp"

struct MGLContext;

struct MGLProgram {
    PyObject_HEAD
    PyObject * wrapper;
    MGLContext * context;
    int program_obj;
    int shader_obj[5];
};

extern PyType_Spec MGLProgram_spec;
PyObject * MGLContext_meth_program(MGLContext * self, PyObject * const * args, Py_ssize_t nargs);
