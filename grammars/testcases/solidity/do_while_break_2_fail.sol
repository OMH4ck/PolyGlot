pragma experimental SMTChecker;

contract C {
	function f() public pure {
		uint a = 0;
		while (true) {
			do {
				break;
				a = 2;
			} while (true);
			a = 1;
			break;
		}
		assert(a == 2);
	}
}
// ====
// SMTSolvers: z3
// ----
// Warning: (128-133): Unreachable code.
// Warning: (147-151): Unreachable code.
// Warning: (180-194): Assertion violation happens here
