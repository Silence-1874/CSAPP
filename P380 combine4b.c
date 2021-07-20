void combine7(vec_ptr v, data_t *dest)
{
    long i;
    long length = vec_length(v);
    long limit = length - 1;
    data_t *data = get_vec_start(v);
    data_t acc = IDENT;

    for (i = 0; i < limit; i += 2) {
        acc = acc OP (data[i + 1] OP data[i + 1]);
    }

    for (; i < length; i++) {
        acc = acc OP data[i];
    }
    *dest = acc;
}