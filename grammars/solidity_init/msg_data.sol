pragma experimental SMTChecker;

contract C
{
	function f() public payable {
		assert(msg.data.length > 0);
	}
}
// ----
// Warning: (86-101): Assertion checker does not yet support this expression.
// Warning: (79-106): Assertion violation happens here
