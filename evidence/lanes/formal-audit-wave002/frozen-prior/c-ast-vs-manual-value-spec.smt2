; benchmark generated from python API
(set-info :status unknown)
(declare-fun input_r14 () (_ BitVec 32))
(declare-fun input_other_cpsr () (_ BitVec 32))
(declare-fun input_r13 () (_ BitVec 32))
(declare-fun input_r0 () (_ BitVec 32))
(assert
 (let (($x129 (or (bvult (bvand input_r14 (_ bv4294967294 32)) (_ bv6887436 32)) (bvuge (bvand input_r14 (_ bv4294967294 32)) (_ bv6887456 32)))))
 (let (($x124 (or (= (bvand input_r14 (_ bv1 32)) (_ bv1 32)) (= (bvand input_r14 (_ bv3 32)) (_ bv0 32)))))
 (let (($x125 (and (= (bvand input_r13 (_ bv7 32)) (_ bv0 32)) (= (_ bv16 32) (bvand (bvand input_other_cpsr (_ bv268435423 32)) (_ bv117505055 32))) $x124)))
 (and $x125 $x129)))))
(assert
 (let ((?x35 (ite (and (bvuge input_r0 (_ bv1 32)) (bvule input_r0 (_ bv10 32))) (_ bv1 32) (_ bv0 32))))
(and (distinct ?x35 ?x35) true)))
(check-sat)
