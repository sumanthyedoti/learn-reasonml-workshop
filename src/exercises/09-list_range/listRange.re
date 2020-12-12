/*
  The append infix operator @ concatenates two lists:

  let (@) : (list('a), list('a)) => list('a)

  This function is the same as the List.append function.
 */
let () = {
  assert([5, 1] @ [8, 4] == [5, 1, 8, 4]);
  assert(List.append([5, 1], [8, 4]) == [5, 1, 8, 4]);
};

/*
  Write a function to construct a list of all integers in the range [from,to_]
  in increasing order.

  let range: (int, int) => list(int)
 */
let rec range = (from, to_) => {
  switch (from) {
  | x when x === to_ => []
  | x => [x, ...range(x + 1, to_)]
  };
};

Js.log(range(2, 5));

Test.runAll([
  (range(1, 4) == [1, 2, 3], "range"),
  (range(-5, 3) == [(-5), (-4), (-3), (-2), (-1), 0, 1, 2], "range"),
]);
