contract C {
  function f() public pure {
    assembly {
      let x := 0100
    }
  }
}
// ----
// ParserError: (72-73): Literal or identifier expected.
