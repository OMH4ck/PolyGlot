contract test {
    uint constant x = 1;
    function f() public {
        assembly {
            x := 2
        }
    }
}
// ----
// TypeError: (98-99): Constant variables cannot be assigned to.
