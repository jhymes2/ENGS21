for page_num, page in enumerate(report):
    for img in page.get_images(full=True):
        xref = img[0]
        base = report.extract_image(xref)
        ext = base["ext"]
        with open(f"{out_dir}/page{page_num+1}_{count}.{ext}", "wb") as f:
            f.write(base["image"])
        count += 1

print(f"Extracted {count} images")