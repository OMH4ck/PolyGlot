pragma experimental SMTChecker;

contract C
{
	function f(uint x, bool b) public pure {
		require(x < 10);
		for (; x < 10; ) {
			if (b)
				++x;
			else {
				x = 20;
				break;
			}
		}
		assert(x >= 10);
	}
}
// ====
// SMTSolvers: z3
