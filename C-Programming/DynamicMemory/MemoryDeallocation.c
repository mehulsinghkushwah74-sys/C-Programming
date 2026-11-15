// Note that memory allocated in heap is not freed unless explicitly specified by the developer

// hence if the memory is not deallocated properly, it would result in memory leaks and eat up unecessary resources of the system.

// Hence, with great power to manage memory on our own, comes great resposibility

int *ptr = (int*) malloc(10*sizeof(int));
free(ptr); 

//memory deallocated but ptr refers to a memory which now does not belong to us, hence ptr (dangling pointer) should be set to NULL.

ptr = NULL; // agr hum isse NULL par set nhi krenge toh woh usi adrees ko point krta rhega

int* ptr = (int*)calloc(4,4);
int* p = ptr;
ptr++;
free(ptr);// it will give error because to free memory the pointer should point to first element
// so now we add an new pointer

free(p);// now ab free ho jayegi
 