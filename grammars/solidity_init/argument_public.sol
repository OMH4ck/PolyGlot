contract C {
    function f(mapping(uint => uint) storage) public pure {
    }
}
// ----
// TypeError: (28-57): Data location must be "memory" for parameter in function, but "storage" was given.
