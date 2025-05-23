attribute [-simp] Nat.default_eq_zero -- undo changes to simp set after this test was written

#check_simp #[1,2,3,4,5][2]  ~> 3
#check_simp #[1,2,3,4,5][2]? ~> some 3
#check_simp #[1,2,3,4,5][7]? ~> none
#check_simp #[][0]? ~> none
#check_simp #[1,2,3,4,5][2]! ~> 3
#check_simp #[1,2,3,4,5][7]! ~> (default : Nat)
#check_simp (#[] : Array Nat)[0]! ~> (default : Nat)

variable {xs : Array α} in
#check_simp xs.size = 0 ~> xs = #[]

#check_simp
  (Id.run do
    let mut s := 0
    for i in #[1,2,3,4] do
      s := s + i
    pure s) ~> 10

#check_simp
  (Id.run do
    let mut s := 0
    for h : i in #[1,2,3,4] do
      s := s + i
    pure s) ~> 10
