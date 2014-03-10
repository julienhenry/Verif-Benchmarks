(set-option :produce-models true)
(set-option :produce-unsat-cores true)
(set-option :interactive-mode true)
(set-option :global-decls false)
(set-option :print-success false)
(push 1)
(declare-fun bd_0 () Bool)
(declare-fun bs_0 () Bool)
(declare-fun t_0_1 () Bool)
(declare-fun x_need_full_buffer_ () Int)
(declare-fun t_0_2 () Bool)
(declare-fun b_3 () Bool)
(declare-fun t_4_3 () Bool)
(declare-fun x_mul_ () Int)
(declare-fun x_unnamed_1_ () Int)
(declare-fun x_mul9_ () Int)
(declare-fun x_unnamed_2_ () Int)
(declare-fun x_div_ () Int)
(declare-fun x_unnamed_3_ () Int)
(declare-fun t_3_5 () Bool)
(declare-fun b_5 () Bool)
(declare-fun x_inc_ () Int)
(declare-fun x_ci.0_ () Int)
(declare-fun t_5_4 () Bool)
(declare-fun b_1 () Bool)
(declare-fun t_1_2 () Bool)
(declare-fun b_2 () Bool)
(declare-fun t_2_6 () Bool)
(declare-fun x_unnamed_4_ () Int)
(declare-fun t_2_7 () Bool)
(declare-fun b_7 () Bool)
(declare-fun t_7_4 () Bool)
(declare-fun bd_4 () Bool)
(declare-fun x_prime_ci.0_ () Int)
(declare-fun bs_4 () Bool)
(declare-fun x_unnamed_5_ () Int)
(declare-fun t_4_8 () Bool)
(declare-fun b_8 () Bool)
(declare-fun t_8_9 () Bool)
(declare-fun b_6 () Bool)
(declare-fun t_6_9 () Bool)
(declare-fun bd_9 () Bool)
(assert (and 
 (= bd_0 false)
 (= t_0_1 (and 
 bs_0
 (not (= x_need_full_buffer_ 0))
))
 (= t_0_2 (and 
 bs_0
 (not (not (= x_need_full_buffer_ 0)))
))
 (= b_3 t_4_3)
 (= x_mul_ (* x_unnamed_1_ 8))
 (= x_mul9_ (* x_mul_ x_unnamed_2_))
 (= x_div_ (div x_mul9_ x_unnamed_3_))
 (= t_3_5 b_3)
 (= b_5 t_3_5)
 (= x_inc_ (+ x_ci.0_ 1))
 (= t_5_4 b_5)
 (= b_1 t_0_1)
 (= t_1_2 b_1)
 (= b_2 (or t_1_2 t_0_2 ))
 (= t_2_6 (and 
 b_2
 (not (= x_unnamed_4_ 0))
))
 (= t_2_7 (and 
 b_2
 (not (not (= x_unnamed_4_ 0)))
))
 (= b_7 t_2_7)
 (= t_7_4 b_7)
 (= bd_4 (or t_5_4 t_7_4 ))
 (or (not bd_4) (= x_prime_ci.0_ (ite t_7_4 0 x_inc_)) )
 (= t_4_3 (and 
 bs_4
 (< x_ci.0_ x_unnamed_5_)
))
 (= t_4_8 (and 
 bs_4
 (not (< x_ci.0_ x_unnamed_5_))
))
 (= b_8 t_4_8)
 (= t_8_9 b_8)
 (= b_6 t_2_6)
 (= t_6_9 b_6)
 (= bd_9 (or t_8_9 t_6_9 ))
))
(push 1)
(declare-fun bs_9 () Bool)
(assert (and 
 bs_0
 (not bs_4)
 (not bs_9)
 true
 (or (and 
 bd_4
 (not false)
) (and 
 bd_9
 (not false)
) )
 (not (not true))
))
(check-sat)
(get-model)
(pop 1)
(push 1)
(declare-fun Bdd_0xc4aec10 () Bool)
(declare-fun bs_9 () Bool)
(assert (and 
 bs_0
 (not bs_4)
 (not bs_9)
 true
 (or (and 
 bd_4
 (not (and 
 (= x_need_full_buffer_ 0)
 (= x_prime_ci.0_ 0)
))
) (and 
 bd_9
 (not false)
) )
 (and 
 (= Bdd_0xc4aec10 (and 
 t_2_6
 true
))
 (not (not (ite t_0_1 true Bdd_0xc4aec10)))
)
))
(check-sat)
(pop 1)
(pop 1)
(exit)
