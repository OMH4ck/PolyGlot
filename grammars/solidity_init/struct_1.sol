pragma experimental SMTChecker;

contract C
{
	struct S {
		uint x;
	}

	mapping (uint => S) smap;

	function f(uint y, uint v) public {
		smap[y] = S(v);
		S memory smem = S(v);
	}
}
// ----
// Warning: (157-170): Unused local variable.
// Warning: (157-170): Assertion checker does not yet support the type of this variable.
// Warning: (139-146): Assertion checker does not yet implement type struct C.S storage ref
// Warning: (149-150): Assertion checker does not yet implement type type(struct C.S storage pointer)
// Warning: (149-153): Assertion checker does not yet implement type struct C.S memory
// Warning: (149-153): Assertion checker does not yet implement this expression.
// Warning: (139-153): Assertion checker does not yet implement type struct C.S storage ref
// Warning: (173-174): Assertion checker does not yet implement type type(struct C.S storage pointer)
// Warning: (173-177): Assertion checker does not yet implement type struct C.S memory
// Warning: (173-177): Assertion checker does not yet implement this expression.
