# -----------------------------------------------------------
# This file is generated by the Qt Visual Studio Integration.
# -----------------------------------------------------------


#Header files
HEADERS += ./src/type/typedsr.h \
    ./src/type/typemodi.h \
    ./src/type/typetable.h \
    ./src/ast/astdsr.h \
    ./src/ast/vmevallink.h \
    ./src/data/data.h \
    ./src/data/smbtbllink.h \
    ./src/data/group/mmd_group.h \
    ./src/data/group/mmd_group_op.h \
    ./src/data/object/obj_vec.h \
    ./src/data/object/object.h \
    ./src/data/polynomial/mmd_poly.h \
    ./src/data/polynomial/mmd_poly_op.h \
    ./src/data/polynomial/mmd_ratf.h \
    ./src/data/polynomial/mmd_ratf_op.h \
    ./src/data/set/mmd_set.h \
    ./src/data/set/mmd_set_op.h \
    ./src/data/string/mmd_str.h \
    ./src/data/string/mmd_str_op.h \
    ./src/data/uniword/uniword.h \
    ./src/data/uniword/uniword_op.h \
    ./src/data/vector/mmd_vec.h \
    ./src/data/vector/mmd_vec_op.h \
    ./src/mminfo/mm_domain.h \
    ./src/mminfo/mm_info.h \
    ./src/operator/operator.h \
    ./src/operator/execop/execop.h \
    ./src/operator/execop/execop_call.h \
    ./src/symbol/optable.h \
    ./src/symbol/smbrecord.h \
    ./src/symbol/symbol_table_dsr.h \
    ./src/vm/vm_eval_cmd.h \
    ./src/vm/vm_eval_equ.h \
    ./src/vm/vm_eval_fun.h \
    ./src/vm/vmeval.h \
    ./src/vm/vmidsr.h \
    ./src/vm/ode/odeonestepparam.h \
    ./src/vm/ode/solde.h \
    ./src/vm/ode/solde_internal.h \
    ./src/cmml/cmmlCalc.h \
    ./src/cmml/cmmlCalcErr.h \
    ./src/cmml/cmmlCalcTag.h \
    ./src/hmathast.h \
    ./src/hmathast_global.h

#Source files
SOURCES += ./src/type/typedsr.cpp \
    ./src/type/typetable.cpp \
    ./src/ast/ast_print.cpp \
    ./src/ast/astdsr.cpp \
    ./src/ast/eval/astdsr_eval_expr.cpp \
    ./src/ast/eval/astdsr_eval_misc.cpp \
    ./src/ast/eval/astdsr_eval_obj.cpp \
    ./src/ast/eval/astdsr_eval_stmt.cpp \
    ./src/ast/type/ast_argcheck.cpp \
    ./src/ast/type/ast_type_args.cpp \
    ./src/ast/type/ast_type_call.cpp \
    ./src/ast/type/ast_type_misc.cpp \
    ./src/ast/type/ast_type_obj.cpp \
    ./src/ast/type/ast_type_stmt.cpp \
    ./src/data/group/mmd_group.cpp \
    ./src/data/group/mmd_group_op.cpp \
    ./src/data/object/object.cpp \
    ./src/data/polynomial/mmd_poly.cpp \
    ./src/data/polynomial/mmd_poly_op.cpp \
    ./src/data/polynomial/mmd_ratf.cpp \
    ./src/data/polynomial/mmd_ratf_op.cpp \
    ./src/data/set/mmd_set.cpp \
    ./src/data/set/mmd_set_op.cpp \
    ./src/data/string/mmd_str_op.cpp \
    ./src/data/uniword/uniword.cpp \
    ./src/data/uniword/uniword_op.cpp \
    ./src/data/vector/mmd_vec.cpp \
    ./src/data/vector/mmd_vec_op.cpp \
    ./src/mminfo/mm_info.cpp \
    ./src/operator/op_linear.cpp \
    ./src/operator/operator.cpp \
    ./src/operator/execop/execop.cpp \
    ./src/operator/execop/execop_convert.cpp \
    ./src/operator/execop/expr/execop_expr.cpp \
    ./src/operator/execop/expr/execop_expr_add.cpp \
    ./src/operator/execop/expr/execop_expr_assign.cpp \
    ./src/operator/execop/expr/execop_expr_bool.cpp \
    ./src/operator/execop/expr/execop_expr_div.cpp \
    ./src/operator/execop/expr/execop_expr_mod.cpp \
    ./src/operator/execop/expr/execop_expr_mul.cpp \
    ./src/operator/execop/expr/execop_expr_pow.cpp \
    ./src/operator/execop/expr/execop_expr_rel_e.cpp \
    ./src/operator/execop/expr/execop_expr_rel_leg.cpp \
    ./src/operator/execop/expr/execop_expr_rel_ne.cpp \
    ./src/operator/execop/expr/execop_expr_set_am.cpp \
    ./src/operator/execop/expr/execop_expr_set_rel.cpp \
    ./src/operator/execop/expr/execop_expr_square.cpp \
    ./src/operator/execop/expr/execop_expr_sub.cpp \
    ./src/operator/execop/execop_fun.cpp \
    ./src/operator/execop/execop_special.cpp \
    ./src/operator/initop/initop.cpp \
    ./src/operator/initop/initop_expr.cpp \
    ./src/operator/initop/initop_fun.cpp \
    ./src/operator/initop/initop_special.cpp \
    ./src/operator/initop/initop_var.cpp \
    ./src/symbol/smbrecord.cpp \
    ./src/symbol/symbol_table_dsr.cpp \
    ./src/vm/vm_eval_equ.cpp \
    ./src/vm/vm_eval_fun.cpp \
    ./src/vm/vm_eval_var.cpp \
    ./src/vm/vmcmd_print.cpp \
    ./src/vm/vmeval.cpp \
    ./src/vm/vmeval_run.cpp \
    ./src/vm/vmidsr.cpp \
    ./src/vm/ode/odeonestepparam.cpp \
    ./src/vm/ode/solde.cpp \
    ./src/vm/ode/solde_internal.cpp \
    ./src/cmml/cmmlCalc.cpp \
    ./src/cmml/cmmlCalc_apply.cpp \
    ./src/cmml/cmmlCalc_astcreate.cpp \
    ./src/cmml/cmmlCalc_construct.cpp \
    ./src/cmml/cmmlCalc_token.cpp \
    ./src/cmml/cmmlCalc_vm.cpp \
    ./src/cmml/cmmlCalcTag.cpp \
    ./src/hmathast.cpp
