pragma experimental SMTChecker;

contract C
{
	function f(uint x) public pure {
		x = 0;
		while (x < 10)
			break;
		assert(x == 0);
	}
}
// ====
// SMTSolvers: z3
// ----
// Warning: (98-104): Condition is always true.
