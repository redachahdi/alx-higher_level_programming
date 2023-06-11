#include <python.h>
/**
 * print_python_list_info - is the function to get python
 *
 * @p: is the PyObject
 *
 */

void print_python_list_info(PyObject *p)
{
	PyListObject *list;
	PyObject *i_t;
	Py_ssize_t i_x;

	list = (PyListObject *) p;
	printf("[*] Size of the Python List = %d\n", (int) Py_SIZE(list));
	printf("[*] Allocated = %d\n", (int) list->allocated);

	for (i_x = 0; i_x < Py_SIZE(list); i_x++)
	{
		i_t = PyList_GetItem(p, index);
		if (i_t != NULL)
			printf("Element %d: %s\n", (int) i_x, i_t->ob_type->tp_name);
	}
}
