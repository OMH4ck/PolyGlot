contract test {
    function f(bytes storage) public;
}
// ----
// TypeError: (31-44): Data location must be "memory" for parameter in function, but "storage" was given.
