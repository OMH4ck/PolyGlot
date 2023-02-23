pragma experimental ABIEncoderV2;
contract C {
    struct S { uint256 x; }
    function f(S calldata s) external pure {
        s.x = 42;
    }
}
// ----
// TypeError: (128-131): Calldata structs are read-only.
