interface I {
	function f();
}
// ----
// SyntaxError: (15-28): No visibility specified. Did you intend to add "external"?
// TypeError: (15-28): Functions in interfaces must be declared external.
