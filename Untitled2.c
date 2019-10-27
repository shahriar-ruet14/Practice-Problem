int main(void)
{
    int value = 100;
    int *value_ptr = &value;
    int **value_double_ptr = &value_ptr;

    printf("Value: %d\n", value);
    printf("Pointer to value: %d\n", *value_ptr);
    printf("Double pointer to value: %d\n", **value_double_ptr);
}
