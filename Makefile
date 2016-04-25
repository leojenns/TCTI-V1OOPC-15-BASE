.PHONY: clean All

All:
	@echo "----------Building project:[ w1opdr2 -  ]----------"
	@cd "w1opdr2" && "$(MAKE)" -f  "w1opdr2.mk"
clean:
	@echo "----------Cleaning project:[ w1opdr2 -  ]----------"
	@cd "w1opdr2" && "$(MAKE)" -f  "w1opdr2.mk" clean
