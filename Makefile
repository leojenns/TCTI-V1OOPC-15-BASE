.PHONY: clean All

All:
	@echo "----------Building project:[ 05-01-xyxy -  ]----------"
	@cd "05-01-xyxy" && "$(MAKE)" -f  "05-01-xyxy.mk"
clean:
	@echo "----------Cleaning project:[ 05-01-xyxy -  ]----------"
	@cd "05-01-xyxy" && "$(MAKE)" -f  "05-01-xyxy.mk" clean
