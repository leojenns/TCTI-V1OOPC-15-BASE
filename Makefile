.PHONY: clean All

All:
	@echo "----------Building project:[ week2opdr2 -  ]----------"
	@cd "week2opdr2" && "$(MAKE)" -f  "week2opdr2.mk"
clean:
	@echo "----------Cleaning project:[ week2opdr2 -  ]----------"
	@cd "week2opdr2" && "$(MAKE)" -f  "week2opdr2.mk" clean
