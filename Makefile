.PHONY: clean All

All:
	@echo "----------Building project:[ week3opdr2 -  ]----------"
	@cd "week3opdr2" && "$(MAKE)" -f  "week3opdr2.mk"
clean:
	@echo "----------Cleaning project:[ week3opdr2 -  ]----------"
	@cd "week3opdr2" && "$(MAKE)" -f  "week3opdr2.mk" clean
