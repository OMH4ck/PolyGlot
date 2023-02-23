pragma experimental ABIEncoderV2;

contract C {
    struct S { uint x; }
    S s;
    struct T { uint y; }
    T t;
    function f() public view {
        bytes32 a = sha256(abi.encodePacked(s, t));
        a;
    }
}
// ----
// TypeError: (191-192): Type not supported in packed mode.
// TypeError: (194-195): Type not supported in packed mode.
