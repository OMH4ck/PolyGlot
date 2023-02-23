pragma experimental SMTChecker;

contract C
{
	function f() internal pure returns (uint, bool, uint) {
		uint x = 3;
		bool b = true;
		uint y = 999;
		return (x, b, y);
	}
	function g() public pure {
		(uint x, bool b, uint y) = f();
		assert(x == 3);
		assert(b);
		assert(y == 999);
	}
}
