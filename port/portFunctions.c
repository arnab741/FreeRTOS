void *memset(void *s, int c, unsigned int n) {
    // Cast the void pointer to an unsigned char pointer for byte-level access
    unsigned char *p = (unsigned char *)s;

    // Cast the integer value 'c' to an unsigned char
    // This ensures only the lowest byte of 'c' is used for filling
    unsigned char byte_value = (unsigned char)c;

    // Loop through each byte of the memory block
    // and assign the 'byte_value' to it
    for (unsigned int i = 0; i < n; i++) {
        p[i] = byte_value;
    }

    // Return the original pointer to the memory block
    return s;
}